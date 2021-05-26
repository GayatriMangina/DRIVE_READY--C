#include<stdio.h>
void find_num(int n)
{
	int a=0,b=1,c=1,count=3;
	while(count!=n)
	{
		a=b;
		b=c;
		c=a+b;
		count++;
		if(count==n)
		{
			printf("%d",c);
		}
		
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	find_num(n);
	return 0;
}
