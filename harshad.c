#include<stdio.h>
int harshad(int n)
{
	int r,res=0,n1;
	n1=n;
	while(n>=0)
	{
		r=n%10;
		res=res+r;
	    n=n/10;
   }  
	if(n1%res==0)
	{
		return 1;
	}
	else
	{
	   return 0;	
	}

}
int main()
{
	int n,g;
	scanf("%d",&n);
	if(harshad(n))
	{
		printf("true");
    }
    else
    {
    	printf("false");
	}
	return 0;
}
