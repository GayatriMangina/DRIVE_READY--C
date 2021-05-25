#include<stdio.h>
int ispalin(int num)
{
	int r,res=0,n1;
	n1=num;
	while(num)
	{
		r=num%10;
	    num=num/10;
	    res=res*10+r;
	}
	
    return res==n1?1:0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(ispalin(n))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
