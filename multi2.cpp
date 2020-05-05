#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,row,col;
	printf("Enter the total no. of rows and columns: ");
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d%d",&a[i][j]);
	}
	printf("Enter the total no. of second row and columns: ");
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",b[i][j]);
	}
	printf("Sum of matrix \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		sum[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%d",sum[i][j]);
	}
	printf("\n");
}
