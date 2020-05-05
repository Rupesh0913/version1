#include<stdio.h>
int main()
{
	int a[10],i,low,high,mid,size,ele;
	printf("Enter the size of array:-");
	scanf("%d",&size);
	printf("Enter the numbers in array:");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	printf("Enter the element you want to search:");
	scanf("%d",&ele);
	low=0;
	high=size-1;
	mid=(low+high)/2;
	do
	{
		if(a[mid]==ele)
		{
			printf("Searched element is:%d\n",ele);
			printf("Location of the element is:%d\n",mid+1);
			break;
		}
		else if(a[mid]<=ele)
		low=mid+1;
		else
		high=mid-1;
		mid=(low+high)/2;
	}
	while(low<=high);
	if(low>high)
	printf("Element not found....\n");
	return 0;
}
