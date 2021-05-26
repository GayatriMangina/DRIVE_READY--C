#include<stdio.h>
int number_found(int n)
{
	int a=0,b=1,c=1;
	while(c!=n)
	{
		a=b;
		b=c;
		c=a+b;
		if(c==n)
		{
			return 1;
		}
		if(c>n)
		{
			return 0;
		}
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	if(number_found(n))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
