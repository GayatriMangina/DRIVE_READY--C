#include<stdio.h>
#include<math.h>
int disjarium(int n)
{
	int p;
	while(n>0)
	{
	   n=n/10;
	   p++;
    }
    return p;
}
int main()
{
	int n,r,g,res=0,num;
	scanf("%d",&n);
	num=n;
	g=disjarium(n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		res=res+pow(r,g);
		g--;
	}
	if(res==num)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
