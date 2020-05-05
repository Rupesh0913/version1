#include<stdio.h>
int main()
{
	int i,j,r,n;
	scanf("%d",&n);
	r=n;
	for(i=1;i<=n;i++)
	{
		for(j=(2*i)-1;j>=1;j--)
		printf("* ");
		printf("\n");
		for(j=1;j<n;j++)
		printf("  ");
		r--;
		//for(j=1;j<=(2*i)-1;j++)
		//printf("* ");
		//printf("\n");
		//num=1;
	}
}
