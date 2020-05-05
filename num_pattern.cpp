#include<stdio.h>
int main()
{
	int n,i,j,x; 	
	int a[50][50];
//	printf("Enter the value of n: ");
	scanf("%d",&n);
	x=2*n-1;
//	while(n!=0)
	//{
	for(i=0;i<x;i++)
	{
		for(j=i;j<=x-i-1;j++)  
		{
			a[i][j]=n;
		}
		for(j=i+1;j<=x-i-1;j++)
		{
			a[j][x-i-1]=n;
		}
		for(j=x-2-i;j>=i;j--)
		{
			a[x-i-1][j]=n;
		}
		for(j=x-2-i;j>i;j--)
		{
			a[j][i]=n;
		}
		n--;
	}
	//n--;
	
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

