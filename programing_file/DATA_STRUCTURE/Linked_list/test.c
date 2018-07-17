// i/p: 1->2->3->4->5->6->7->8->9->NULL  k=3;
//o/p:3->2->1->4->5->6->9->8->7->NULL

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
  int item;
  struct st *next;
}stud;

stud * rev_alt(stud *);
void travers(stud *);

int main()
{
  stud *head=NULL,*cur=NULL,*pre=NULL;
  int i=0;
  printf("enter nodes\n");
while(i<9){
  stud *node=(stud *) malloc(sizeof(stud));
   scanf("%d",&node->item);
  node->next=NULL;
   if(head==NULL){
        head=node;
        cur=head;
    }
  else{
    cur->next=node;
    cur=node;
     }
  i++;
  }

 travers(head);

 head=rev_alt(head);
 travers(head);
}
// traversal of linked list
void travers(stud *head){
  stud *node=head;
   while(node!=NULL){
   printf("%d->",node->item);
   node=node->next;
   }
}

// reverse altrenate k node

stud * rev_alt(stud * head)
 {
   stud *cur=head,*pre=NULL,*temp=NULL;
    int i=0,k=3;
   while(cur!=NULL && i<k)
   {
     temp=cur->next;
     cur->next=pre;
     pre=cur;
     cur=next;
    i++;
  }

  if(head!=NULL)
    
     
