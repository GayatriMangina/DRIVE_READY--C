#include<stdio.h>
int main()
{
	int marks[50],size,i,sum=0,e=0,o=0;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<size;i++)
	{
		if(marks[i]%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("%d %d",e,o);
	return 0;
}
