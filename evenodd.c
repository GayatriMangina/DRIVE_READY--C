#include<stdio.h>
void evenodd(int n)
{
	int r,res=0,a=1,res1=0,a1=1;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		{
			res=res+r*a;
		    a=a*10;
		}
		else
		{
		   res1=res1+r*a;
		   a1=a1*10;	
		}
	}
	printf("%d %d",res,res1);
}
int main()
{
	int n;
	scanf("%d",&n);
	evenodd(n);
	return 0;
}
