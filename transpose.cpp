#include<stdio.h>
int main()
{
	int i,j,row,col,a[10][10],b[10][10];
	printf("Enter the no. of rows: ");
	scanf("%d",&row);
	printf("Enter the value of columns: ");
	scanf("%d",&col);
	printf("enter the values of matrix \n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	{
		scanf("%d",&a[i][j]);
	}
	printf("The matrix is \n");
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{
		printf("%d ",a[i][j]);
	}
		printf("\n");
	}
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	{
		b[j][i]=a[i][j];
	}
	printf("Transpose of the matrix  \n");
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
//	{
		printf("%d ",b[i][j]);
//	}
	printf("\n");
	}
	return 0;
}
