#include<stdio.h>
#include<math.h>
int disjarium(int n)
{
	int r,p=0,num,res=0,num1;
	num=n;
	num1=n;
  	while(n)
	{
		n=n/10;
		p++;
	}
	while(num>0)
	{
		r=num%10;
		num=num/10;
		res=res+pow(r,p);
		p--;
	}
	if(res==num1)
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
	if(disjarium(n))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
	
}
