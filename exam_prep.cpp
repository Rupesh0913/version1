#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the cofficient of x, a: ");
	scanf("%d",&a);
	printf("Enter the cofficient of y, b: ");
	scanf("%d",&b);
	printf("Enter the cofficient of z, c: ");
	scanf("%d",&c);
	d=(b*b)-4*(a*c);
	if(d>0)
	printf("the roots are real and unequal");
	else if(d==0)
	printf("the roots are real and equal");
	else 
	printf("the roots are imaginery");
	return 0;
}
