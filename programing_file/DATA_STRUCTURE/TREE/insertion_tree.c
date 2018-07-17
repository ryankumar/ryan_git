#include<stdio.h>
#include<stdlib.h>
typedef struct bst
 {
    int data;
  struct bst *left;
  struct bst *right;
 }node;

node * insert(node *root,int n);
node * creat(int n);
int search(node *root,int n);

int main()
{
   node *root=NULL;

  int n;
  char ch;
 do
{
  printf("enter an element\n");
  scanf("%d",&n);
   root=insert(root,n);
  printf("do you want to insert again y/n:\n");
  scanf("\n%c",&ch);
  }while(ch=='y');

//search a node
int num;
 printf("enter a number want to search \n");
 scanf("%d",&num);
 num=search(root,num);
 if(num==-1)
  printf("num is not found\n");
 else
  printf("num is found \n");

return 0;
}

// insertion of node

node * insert(node *root,int n)
 {
    node *newnode=NULL;
   newnode=creat(n);
  if(root==NULL)
   {
     root=newnode;
   }
 else if(n<=root->data)
  {
    root->left=insert(root->left,n);
  }
 else{
   root->right=insert(root->right,n);
  }
return root;
}

//creation of node

node * creat(int n)
  {
    node * newnode=(node *)malloc(sizeof(node));
    newnode->data=n;
    newnode->left=NULL;
    newnode->right=NULL;
   return newnode;
 }

// search a node

int search(node *root,int n)
 {
   if(root==NULL)
    return -1;
   else if(n==root->data)
    return 1;
  else if(n<root->data)
    return search(root->left,n);
 else
   return search(root->right,n);
 }
