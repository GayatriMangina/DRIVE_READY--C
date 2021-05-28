#include<stdio.h>
int mul_algo(int a,int b)
{
	int r=0;
	while(a>0)
	{
		if(a%2!=0)
		{
			r=r+b;
		}
		a=a/2;
		b=b*2;
	}
	return r;
}
int main()
{
	int a,b,g;
	scanf("%d%d",&a,&b);
	g=mul_algo(a,b);
	printf("%d",g);
	return 0;
}
