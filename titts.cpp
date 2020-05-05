			// to take two numbers from user in interger form as well as float form and display the sum and the difference between the two numbers //
#include<stdio.h>
int main()
{
	int a,b,c,d,m,h,g,f;
	printf("enter the first no.=");
	scanf("%d",&a);
	printf("enter the second no.=");
	scanf("%d",&b);
	printf(" enter the first no.=");
	scanf("%f",&c);
	printf("enter the seond no.=");
	scanf("%f",&d);
	m=a+b;
	h=a-b;
	g=c+d;
	f=c-d;
		printf("%d",m);
			printf("%d",h);
				printf("%f \n",g);
					printf("%f",f);
	
	return 0;
}
