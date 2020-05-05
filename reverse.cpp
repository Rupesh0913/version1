#include<stdio.h>
int main()
{
	int a,b,result=0;
	printf("Enter any number: ");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		result=(result*10)+b;
	}
	printf("Reversed value is is %d",result);
}
