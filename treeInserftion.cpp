#include<bits/stdc++.h>
using namespace std;

struct node
{
	int key;
	node *left,*right;
	node(int x)
	{
		key=x;
		left=right=NULL;
	}
};

void inorder(node *temp)
{
	if(!temp)
		return;
	inorder(temp->left);
	cout<<temp->key;
	inorder(temp->right);
}

void insert(node *temp,int key)
{
	queue<node*>q;
	q.push(temp);
	while(!q.empty())
	{
		node *temp=q.front();
		q.pop();
		if(!temp->left)
		{
			temp->left=new node(key);
			break;
		}
		else
		{
			q.push(temp->left);
			if(!temp->right)
			{
				temp->right=new node(key);
			}
			else
				q.push(temp->right);
		}
	}
}

int main()
{
	node *root=new node(10);
	int key=12;
	inorder(root);
	cout<<"\n";
	insert(root,key);
	inorder(root);
	return 0;
}
