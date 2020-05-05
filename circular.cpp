#include<stdio.h>
int cqueue[5];
int front=-1;
int rear=-1;
void insert(int item)
{
	if((front==0 && rear==5-1)||front==rear+1)
	{
	printf("Queue overflow\n");
	return;
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		if(rear==5-1)
		rear=0;
		else
		rear=rear+1;
	}
	cqueue[rear]=item;
}
void delet()
{
	if(front==-1)
	{
		printf("Queue underflow\n");
		return;
	}
	printf("Element deleted from queue is:%d\n",cqueue[front]);
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		if(front==5-1)
		front=0;
		else
		front=front+1;
	}
}
void display()
{
	int front_pos=front,rear_pos=rear;
	if(front==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue's elements\n");
	if(front_pos<=rear_pos)
	while(front_pos<=rear_pos)
	{
		printf("%d ",cqueue[front_pos]);
		front_pos++;
	}
	else
	{
		while(front_pos<=5-1)
		{
			printf("%d ",cqueue[front_pos]);
			front_pos++;
		}
		front_pos=0;
		while(front_pos<=rear_pos)
		{
			printf("%d ",cqueue[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}
int main()
{
	int choice,item;
	do
	{
		printf("1:Insert\n");
		printf("2:delet\n");
		printf("3:display\n");
		printf("4:quit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("Enter the element you want to insert in queue:");
					scanf("%d",&item);
					insert(item);
					break;
			case 2: 
					delet();
					break;
			case 3:
					display();
					break;
			case 4:
					break;
					default:
					printf("Wrong input\n");
		}
	}while(choice!=4);
	return 0;
}
