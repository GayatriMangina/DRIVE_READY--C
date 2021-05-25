#include<stdio.h>
int main()
{
	int n,r,count;
	count=0;
	scanf("%d",&n);
	while(n)
	{
			r=n%10;
	        n=n/10;
	        count=count+1;
	}
	printf("%d",count);
}
	
