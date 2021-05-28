#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}
int main()
{
	int n,g;
	scanf("%d",&n);
	g=fact(n);
	printf("%d",g);
	return 0;
}
