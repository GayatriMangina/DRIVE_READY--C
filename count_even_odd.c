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
	printf("%d %d",o,e);
	return 0;
	
}
