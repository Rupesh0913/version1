#include<stdio.h>
int main()
{
	int a[100],sum=0,n,i,largest;
	printf("Enter the length of arry but less than 100 ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the vaue of array [%d]\n",i);
		scanf("%d",&a[i]);
			if(a[i]<a[i+1])
			largest=a[i];
			else
			largest=a[i+1];
		
	}
	printf("Largest value of array is %d",largest);
}
