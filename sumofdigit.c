#include<stdio.h>
int sumofdigit(int num)
{
	int r,re=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		re=re+r;
	}
	return re;
}
int main()
{
	int n,a;
	scanf("%d",&n);
	a=sumofdigit(n);
	printf("%d",a);
	return 0;
}
