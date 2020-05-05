#include<stdio.h>
int main()
{
	int row,column,i,j,num=65;
	printf("enter the no. rows: ");
	scanf("%d",&row);
	//printf("Enter the no. of columns: ");
	//scanf("%d",&column);
	for(i=0;i<=row;i++)
	{
		printf("\n");
		for(j=0;j<i;j++)
		printf("* ");
		
	}
	for(i=1;i<=row;i++)
	{
		printf("\n");
		
		for(j=i;j<row;j++)		
    
	 
		printf("* ");
	
	}
}
