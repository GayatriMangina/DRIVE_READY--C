#include<stdio.h>
int collagen(int n)
{
	if(n==1)
	{
		return 1;

	}
	if(n%2==0)
	{
		printf("%d ",n);
        return collagen(n/2);
	}
	else
	{
		printf("%d ",n);
		return collagen(3*n+1);
	}
}
int main()
{
	int n,g;
	scanf("%d",&n);
   if(g=collagen(n))
   {
   			printf("%d ",g);
   }  

}
