#include<stdio.h>
int main()
{
	int n,r,e=0,o=0;
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	if(e%2==0 && o%2==0)
	{
		printf("even");
	}
	else if(e%2!=0 && o%2!=0)
	{
		printf("odd");
	}
	else if((e%2==0 && o%2!=0) ||(e%2!=0 && o%2==0))
	{
		printf("mixed");
	}
	return 0;
	
}
