#include<stdio.h>
#include<stdlib.h>
#include "struct.h"

node *latest=NULL;

int main()
{
  unsigned int  n,count,i=0,p;
  char ch;
  node *head=NULL;
     printf("how many nodes want to enter\n");
     scanf("%u",&count);
     if( count <= 1)
      {
        printf("count should be more than one\n");
        return 0;
      }  

   while(i<count){
       
      printf("enter the data\n");
      scanf("%u",&n);
      if(n>4294967295)
       {
         printf("enterd number %u is greater than limit of unsigned int\n ",n);
             return 0;
       }
     head=insert_node(head,n);
      i++;
      }

printf("before swapping nodes\n");
travers_node(head);

head=swap_node(head);
printf("after swap\n");
 travers_node(head);
  
return 0;
}

// insert node

node * insert_node(node *head,int n)
{
    node *temp=NULL;
      temp=create_node(n);
     if(head==NULL){
       head=temp;
       latest=head;
      }
     
     else{
       latest->next=temp;
       latest=temp;
      }
   return head;
}

// create node

node * create_node(int n)
{
  node *temp=(node *)malloc(sizeof(node));
  temp->data=n;
   temp->next=NULL;
  return temp;
}

// swaping node

node * swap_node(node *head)
{
   node * cur=head,*pre=head;
    cur=cur->next;
     pre->next=cur->next;
     cur->next=pre;
     head=cur;
   return head;
}

//traverse of node

void travers_node(node *head)
{
  node * cur=head;
   if(head==NULL){
    printf("there is no node\n");
    return;
   }
  else{
  while(cur!=0)
   {
      printf(" add : %p  data:%d\n",&(cur->data),cur->data);
      cur=cur->next;
   }
 }

}
