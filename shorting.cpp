#include<stdio.h>
void selshot(int[],int);
int main()
{
	int arr[20],size,i;
	printf("enter the size of the array:");
	scanf("%d",&size);
	printf("Enter the elements in array\n");
	for(i=0;i<size,i++)
	scanf("%d",arr[i]);
	selshot(arr,size);
	printf("The shorted array is given below:/n");
	for(i=0;i<size;i++)
	printf("%d \n",arr[i]);
	return 0;
}
void selshort(int arr[],int size)
{
	int small,pos,temp;
	for(int i=0;i<size-1;i++)
	{
	small=arr[i];
	pos=i;
	for(int j=i+1;j<size,J++)
	{
		if(arr[j]<small)
		{
			small=arr[j];
			pos=j;
		}
	}
	temp=arr[i];
	arr[i]=arr[pos];
	arr[pos]=temp;
	}
}
