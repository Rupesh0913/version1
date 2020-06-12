#include<bits/stdc++.h>
using namespace std;

struct Node 
{
  int data;
  struct Node *left,*right;
  Node(int data){
     this->data=data;
     left=right=NULL;
  
   }
};


void printPostOrder(struct Node *node)
{
   if(node==NULL)
     return;
  printPostOrder(node->left);
  printPostOrder(node->right);
  cout<<node->data<<" ";
}



int main()
{


struct Node *base=new Node(1);
base->left=new Node(2);
base->right=new Node(5);
base->left->left=new Node(3);
base->left->right=new Node(4);
base->right->left=new Node(6);

printPostOrder(base);
cout<<"\n";

return 0;

}


