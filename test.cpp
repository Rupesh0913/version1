#include<bits/stdc++.h>
using namespace std;
int select(int arr[],int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		if(arr[j]>arr[j+1])
		min=j;
	}
	int temp;
		temp=min;
		min=i;
		i=temp;
	cout<<"The final output:\n";
	for(i=0;i<n;i++)
	cout<<arr[i];
}
int main()
{
	int arr[100],i,size,temp,j;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements in array\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	select(arr[],size);
}
