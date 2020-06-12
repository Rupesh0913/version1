#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left,*right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
void preorder(struct Node *node,int val)
{
	if(node==NULL)
		return;
	if (node->data==val);
		cout<<"value is found"<<"\n";
	preorder(node->left,val);
	preorder(node->right,val);
}

int main()
{
	struct Node *root;
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(5);
	root->left->left=new Node(3);
	root->left->right=new Node(4);
	root->right->left=new Node(6);

	int val=5;
	preorder(root,val);
	return 0;
}