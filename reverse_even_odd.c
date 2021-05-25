#include<stdio.h>
void reverse_even_odd(int num)
{
	int res=0,res1=0,r;
	while(num)
	{
		r=num%10;
		num=num/10;
		if(r%2==0)
		{
			res=res*10+r;
		}
		else
		{
			res1=res1*10+r;
		}
	}
	printf("%d %d",res,res1);
}
int main()
{
	int n;
	scanf("%d",&n);
	reverse_even_odd(n);
	return 0;
}
