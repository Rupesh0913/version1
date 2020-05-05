#include<stdio.h>
int main()
{	
	int a,b;
	printf("enter first no.\n");
	scanf("%d",&a);
	printf("enter second no. \n");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swaping the no. is %d",a);
	printf("\n after swaping the no. is %d",b);
}
