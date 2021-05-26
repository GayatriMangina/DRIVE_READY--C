#include<stdio.h>
void second_even(int n)
{
	int a=0,b=1,c=1,count=1;
	while(count!=n)
	{
		a=b;
		b=c;
		c=a+b;
		if(c%2==0)
		{
			count++;
		}
		if(count==n)
		{
			printf("%d",c);
		}
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	second_even(n);
	return 0;
}
