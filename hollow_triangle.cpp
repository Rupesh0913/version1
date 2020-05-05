#include<stdio.h>
int main()
{
	int row,n,i,j,x;
	printf("Enter total no. of rows: ");
	scanf("%d",&row);
	n=row;
	for(i=1;i<=row;i++)
	{
		for(j=i;j<n;j++)
		printf("  ");
		//n--;
		x=((2*i)-1);
		for(j=1;j<=x;j++)
		if(j==1||j==x) 
		printf("* ");
		else if(row /*/2+1*/==i)
		printf("* ");
		else
		printf("  ");
		printf("\n");
	}
}

