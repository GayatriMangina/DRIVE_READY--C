#include<stdio.h>
int perfect(int n)
{
	int i,s=0,s1=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
		else
		{
			s1=s1+i;
		}
	
	}
	printf("%d",s);
}
int main()
{
	int n;
	scanf("%d",&n);
	perfect(n);
	return 0;
}
