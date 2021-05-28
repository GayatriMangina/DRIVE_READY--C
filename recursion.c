#include<stdio.h>
int recur(int a,int b)
{
	int r=0;
	if(a==0)
	{
		return 0;
	}
	if(a%2!=0)
	{
		return b+recur(a/2,b*2);
	}
	return recur(a/2,b*2);
}
int main()
{
	int a,b,g;
	scanf("%d%d",&a,&b);
	g=recur(a,b);
	printf("%d",g);
	return 0;
}
