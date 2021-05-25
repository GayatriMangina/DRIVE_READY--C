#include<stdio.h>
int even_odd(int num)
{
	int r,re;
	r=num%10;
	num=num/10;
	while(num)
	{
		re=num%10;
		num=num/10;
		if((r%2==0 && re%2==0) ||( r%2!=0 && re%2!=0))
		{
			return 0;
		}
		else
		{
			r=re;
		}
	}
}
int main()
{
	int t,i,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		if(even_odd(n))
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
	return 0;
}
