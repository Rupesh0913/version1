#include<bits/stdc++.h>
using namespace std;
struct node *head=NULL;
struct node
{
 	int data;
 	struct node *next; 
};
void insert(int data)
{
 	struct node *temp;
 	temp=new node();
 	temp->data=data;
 	temp->next=head;
 	head=temp;
 }
 void print()
 {
 	struct node *temp=head;
 	if(head == NULL)
 		cout<<"underflow statement";
 	else
 	cout<<"List\n";
 		while(temp!=NULL)
 		{
 			cout<<temp->data<<"\n";
 			temp=temp->next;
 		}
 }
 void Insert_atP(int Pos,int data)
 {
 	struct node *ptr;
	ptr=new node();
	ptr -> data=data;
	int i,pos;
	struct node *temp=head;
	if(pos==1)
	{
		ptr -> next=temp;
		head=ptr;
		return;
	}
	for(i=0;i<pos-1;i++)
		temp=temp -> next;
	ptr -> next=ptr;
	print();
}
 int main()
 {
 	int n,a=NULL,i,pos,data;
 	char b;
 	cout<<"Enter the length of the linklist you want to create:";
 	cin>>n;
 	cout<<"Enter the value: "<<"\n";
 	for(i=0;i<n;i++)
 	{
		cin>>a;
 		insert(a);
 	}
	print();
	cout<<"Do you want to increase the length of your linklist:(Y/N)";
	cin>>b;
	if(b=='N'||b=='n')
	{
		cout<<"thank you..!!";
	}
	else if(b=='Y'||b=='y')
	{
		cout<<"Enter the position you want to enter the value: ";
		cin>>pos;
		cout<<"Enter the value :";
		cin>>data;
		Insert_atP(pos,data);
	}
	else if((b!='N'||b!='n')&&(b!='Y'||b!='y'))
	{
		cout<<"wrong input";
	}
	print();
 }
