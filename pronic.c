#include<stdio.h>
int pronic(int n)
{
	int i,h;
	for(i=1;i<=n;i++)
	{
	
	  if(i*(i+1)==n)
	 { 
		return 1;
	 }
	  if(i*(i+1)>n)
	  {
	  	return 0;
	  }
    }
}
int main()
{
	int n,g;
	scanf("%d",&n);
    if(pronic(n))
    {
    	printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
