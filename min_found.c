#include<stdio.h>
int  min_value(int num)
{
	int a=0,b=1,c=0;
	while(c<num)
	{
		a=b;
		b=c;
		c=a+b;
    	if(c==num)
		{
			return 1;
		}
		 if(num-a==c-num)
		{
				printf("%d",a);
		}
	}
			return num-b<c-num?b:c;

}
int main()
{
	int n,g;
	scanf("%d",&n);
	g=min_value(n);
	if(g==1)
	{
		printf("true");
	}
	else
	{
		printf("%d",g);
	}
	return 0;
}
