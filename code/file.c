#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Node{
  struct Node *left;
  struct Node *right;
  int data;
};
void main()
{

}
int search(int key,struct Node*root1)
{
  if((root1==NULL)||(root1->data==key))
  {
    return root1;
  }
  else if(key<root->data)
  {search(key,root1->left);}
  else{search(key,root1->right);}
}
void insert(NODE *root1, NODE *new_node)​

{​

   if(new_node->data < root1->data)​

   {​

    if(root1->left == NULL)​

    root1->left=new_node;​

    else​

    insert(root1->left, new_node);​

   }​

  else​

  {​

   if(root1->right == NULL)​

   root1->right=new_node;​

   else​

   insert(root1-> right, new_node);​

  }​

}​
void inorder(struct Node*temp)
{if(temp!=NULL)
{inorder(temp->left);
printf("%d",temp->data);
inorder(temp->right);}}
void preorder(struct Node*temp)
{
  if(temp!=NULL)
  {printf("%d",temp->data);
  preorder(temp->left);
  preorder(temp->right);
  }
}
void postorder(struct Node*temp)
{
postorder(temp->left);
postorder(temp->right);
printf("%d",temp->data);}
