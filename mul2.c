#include<stdio.h>
int main()
{
	int n,i,mul;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mul=n*i;
		printf("%d x %d = %d\n",n,i,mul);
	}
	
}
