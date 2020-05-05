#include<stdio.h>
int main()
{
	int i,j,row,col,row2,col2,a[10][10],b[10][10],x[10][10],sum=0;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns: ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		scanf("%d",&a[i][j]);
    printf("\n");
	printf("Enter the number of row for 2nd matrix: ");
	scanf("%d",&row2);
	printf("Enter the number of columns for 2nd matrix: ");
	scanf("%d",&col2);
	for(i=0;i<row2;i++)
		for(j=0;j<col2;j++)
		scanf("%d",&b[i][j]);
	if(col!=row2)
	printf("THE MATRIX CANNOT BE MULTIPLIED");
	else
	printf("We can go for multiplication now\n");
	for(i=0;i<row;i++)
	{
	for(j=0;j<col2;j++)
	sum=(a[i][j]*b[j][i])+sum;
	x[i][j]=sum;
	printf("%d",x[i][j]);
	printf("\n");
	}
	//sum=0;
	//printf("Multiplied matrix is \n");
	//printf("%d",x[i][j]);

}

