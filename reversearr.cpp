#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("enter size:");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=n-1;i>=0;i--)
	printf("%d ",arr[i]);
}
