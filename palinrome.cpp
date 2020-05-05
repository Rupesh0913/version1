#include<stdio.h>
int main()
{
	int num,temp,rem,result=0;
	printf("Enter any number");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		result=(result*10)+rem;
	}
	if(result==temp)
	
		printf("Palinrome");
	else
		printf("Not Plainrome");
	
}
