#include <stdio.h>
int Commondivisor(int a,int b)
{
	while (b!=0) {a=a%b^b;b^=a;a^=b;}
	return a;
}

int main(void)
{	int a,b,c;
	scanf("%d%d",&a,&b);
	c=Commondivisor(a,b);
	printf("%d %d",a/c,b/c);
}


