#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("Enter the no. whose factorial we need to find:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
    }
	printf("factorial is %d",fact);
	return(0);
}
