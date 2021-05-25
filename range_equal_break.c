#include<stdio.h>
int main()
{
	int n,e,i,mul;
	scanf("%d%d",&n,&e);
	for(i=1;i<=e;i++)
	{
		mul=n*i;
		printf("%d x %d = %d\n",n,i,mul);
		if(mul==e)
		{
			break;
		}
	}
	
}
