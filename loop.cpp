#include<stdio.h>
int main()
{
 long int a,b;
	printf("************************************************** ");
	printf("\n \t \t \t \t enter first valve = ");
	scanf("%d",&a);
	printf("************************************************** ");
	printf("\n \t \t \t \t enter last value = ");
	scanf("%d",&b);
	for(int i=a;a<=b;a++)
{
                       for(int j=a;j<=b;j++)
                       {
					   printf("   %d",j);
					   }
	printf(" %d \n",a);
	
	} 
		return 0;
}
