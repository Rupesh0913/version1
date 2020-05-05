#include<stdio.h>
int main()
{
	int row,n,i,j;
	printf("Enter total no. of rows: ");
	scanf("%d",&row);
	//printf("Enter total no. of columns: ");
	//scanf("%d",&col);
	n=row;
	for(i=row;i<=1;i++)
	{
	//	printf(" ");
	//	for(j=1;j<n;j++)
	//	printf("  ");
	//	n--;
		for(j=(2*i)-1;j>=1;j++)		
		printf("* ");
		printf("\n");
		
	}
}
		
