#include<stdio.h>
int swap(int a,int b);
int main()
{
	int x,y,a,b;
	printf("Enter 1st value:");
	scanf("%d",&x);
	printf("Enter 2nd value:");
	scanf("%d",&y);
	swap(x,y);
	printf("Entered value is: %d %d ",x,y);
	return 0;
}
int swap(int a,int b)
{

	int temp;
	temp=a;
	a=b;
	b=temp;	
	printf("Swaped value is: %d %d \n",a,b);
}

