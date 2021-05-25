#include<stdio.h>
int main()
{
	int n,s,i,mul;
	scanf("%d%d",&n,&s);
	for(i=1;i<=s;i++)
	{
		mul=n*i;
		printf("%d x %d = %d\n",n,i,mul);
	}
	
}
