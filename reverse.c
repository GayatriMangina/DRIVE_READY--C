#include<stdio.h>
int main()
{
	int n,i,r;
	scanf("%d",&n);
	while(n)
	{
			r=n%10;
	        n=n/10;
	        printf("%d",r);
	}
}
	
