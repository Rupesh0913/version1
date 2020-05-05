#include<stdio.h>
int main()
{
	int row,col,row2,col2,i,j,k,sum=0;
	int a[10][10],b[10][10],e[10][10];
	printf("Enter the value of first row and column: \n");
	scanf("%d%d",&row,&col);
	printf("Enter the elements of first matrix \n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",a[i][j]);
	printf("Enter the value of second row and column: ");
	scanf("%d%d",&row2,&col2);
	if(col!=row2)
	printf("the matrix cannot be multiplied \n");
	printf("Enter the elements of second matrix \n");
	for(i=0;i<row2;i++);
	for(j=0;j<col2;j++);
	scanf("%d",&b[i][j]);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col2;j++)
		{
			for(k=0;k<row2;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
		e[i][j]=sum;
		sum=0;
		}
	}
	printf("Product of matrix is\n");
	for(i=0;i<sum;i++)
	{
		for(j=0;j<col2;j++)
		printf("%d\t",e[i][j]);
		printf("\n");
	}
}
