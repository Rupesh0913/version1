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


int printPostOrder(struct Node *node)
{
   if(node==NULL)
     return 0;
    int height1 = printPostOrder(node->left);  
    int height2 = printPostOrder(node->right);  
        if (height1 > height2)  
        	return(height1 + 1);  
        else return(height2 + 1);  
    }  
int main()
{

Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"postOrder:- ";
    
    cout<< printPostOrder(root);
//struct Node *base=new Node(1);
//base->left=new Node(2);
//base->right=new Node(5);
//base->left->left=new Node(3);
//base->left->right=new Node(4);
//base->right->left=new Node(6);

//cout<<"\n";
//cout<<printPostOrder(root);
 // if (node == NULL)  
  //      return 0;  
   // else
   // {  
   //    
    //    int lDepth = (node->left);  
     //   int rDepth = maxDepth(node->right);  
      //        if (lDepth > rDepth)  
       //     return(lDepth + 1);  
       // else return(rDepth + 1);  
    //}  

//cout << "depth of the tree is " << dept(base);  

return 0;
}

