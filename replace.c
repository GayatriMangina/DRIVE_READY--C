#include<stdio.h>
void replace(int n,int r,int w)
{
	int re,s=0,a=1;
	while(n)
	{
		re=r%10;
		n=n/10;
		if(re==r)
		{
		  s=s+w*a;	
		}
		else
		{
			s=s+re*a;
		}
		a=a*10;
	}
	printf("%d",s);
}
	
int main()
{
	int n,r,w;
	scanf("%d %d %d",&n,&r,&w);
	replace(n,r,w);
	return 0;
}
