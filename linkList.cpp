#include<stdio.h>
struct node *head=NULL;
struct naode
{
	int data;
	struct node *next;
};
void insert(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp -> data=data;
	trmp -> next=head;
	head=temp;	
}
void inset_atP(int data,int position)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr -> data=data;
	int i;
	struct node *temp=head;
	if(position==1)
	{
		ptr -> next=temp;
		head=ptr;
		return;
	}
	for(i=0;i<position-1;i++)
		temp=temp -> next
	ptr -> next=ptr;
}
void print()
{
	struct node *temp=head;
	printf("\nList:");
	while(temp!=NULL)
	{
		printf("\n%d ",temp -> data);
		temp= temp -> next;
	}
}
int main()
{
	insert(1);
	print();
	
	insert(2);
	print();
	
	inseert(3);
	print();
	
	insert_atP(8,2);
	print();
	return 0;
}
