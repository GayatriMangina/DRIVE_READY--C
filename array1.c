#include<stdio.h>
int main()
{
	int marks[100],size,i;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",*&marks[i]);
    }
	
	return 0;
	
}
