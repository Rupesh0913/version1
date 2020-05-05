#include<stdio.h>
int main()
{
	int arr[10],i,size,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
