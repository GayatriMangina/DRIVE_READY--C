#include<stdio.h>
int main()
{
	int n,s,e,i,mul;
	scanf("%d%d%d",&n,&s,&e);
	for(i=s;i<=e;i++)
	{
		mul=n*i;
		printf("%d x %d = %d\n",n,i,mul);
	}
	
}
