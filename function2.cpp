#include<stdio.h>
int swap(int &a,int &b);
int main()
{
		int result,x,y;
		printf("Enter any two value:");
		scanf(" %d %d",&x,&y);
		swap (x,y);
		printf("resut is: %d %d",x,y);
		
}
int swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
