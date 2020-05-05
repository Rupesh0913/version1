#include<stdio.h>
#include<math.h>
int main()
{
	int num,origNum,remainder,result=0,n=0;
	printf("Enter any integer:");
	scanf("%d",&num);
	origNum=num;
	while(origNum!=0);
	{
		origNum/=10;
		++n;
	}
	origNum=num;
	while(origNum!=0)
	{
		remainder=origNum%10;
		result=result+pow(remainder,n);
		origNum=origNum/10;
	}
	if(result==num)
	printf("%d is armstrong:",num);
	else
	printf("%d is not armstrong:",num);
	return 0;
}
