#include <stdio.h>

int x=1,y=0;

int exgcd(int a,int b);

int main()
{
	int a,b;
	int m,gcd;
	scanf("%d%d",&a,&b,&m);// xa+yb=(a,b); xa mod -b=(a,b);
	gcd=exgcd(a,b);

	printf("%d %d",x,y);
	
}

int exgcd(int a,int b)// xa+yb=gcd(a,b);
{	int ans;
	if (b==0) {return a;}
	ans=exgcd(b,a%b);
	x^=y;y^=x;x^=y;
	y=y-a/b*x;
	return ans;
}
