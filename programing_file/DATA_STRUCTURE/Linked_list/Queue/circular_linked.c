#include<stdio.h>
#include<stdlib.h>
struct link
{
  int item;
  struct link *next;
};
int main()
{
  struct link *head=NULL,*cur=NULL,*node=NULL;
  int data,n,i=0;
  printf("how many node want to creat\n");
 scanf("%d",&n);
  while(i<n)
  {
    node=(struct link *)malloc(sizeof(struct link));
     printf("enter data\n");
    scanf("%d",&data);
    node->item=data;
    node->next=NULL;
    
    if(head==NULL){
     head=node;
     cur=node;
    }
   
   else{
      cur->next=node;
       cur=node;
    }
  i++;
 }
cur->next=head;

// testing purpose only
  cur=head;
  while(cur->next!=NULL)
   {
     printf("%d ",cur->item);
     cur=cur->next;
   }
}

