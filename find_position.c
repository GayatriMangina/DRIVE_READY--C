#include<stdio.h>
int find_position(int n)
{
	int a=0,b=1,c=1,count=3;
	while(c!=n)
	{
		a=b;
		b=c;
		c=a+b;
		count++;
		return (c==n)?count:0;
	}
	 
}
int main()
{
	int n,a;
	scanf("%d",&n);
	if(a=find_position(n))
	{
		printf("%d",a);
	}
	else
	{
		printf("false");
	}
	
	return 0;
}
