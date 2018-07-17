// i/p: 1->2->3->4->5->6->7->8->9->NULL  k=3;
//o/p:3->2->1->4->5->6->9->8->7->NULL

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
  int item;
  struct st *next;
}stud;

void rev_alt(void);
void travers(void);
stud *head=NULL;
int main()
{
  stud *cur=NULL,*pre=NULL;
  int i=0;
while(i<9){
  stud *node=(stud *) malloc(sizeof(stud));
   node->item=i+1;
   node->next=NULL;
   if(head==NULL){
        head=node;
        cur=head;
    }
  else{
    cur->next=node;
    cur=node;
     }
  }

 travers();
// head=rev_alt(head);
// travers(head);
}
// traversal of linked list
void travers(void){
  stud *node=head;
   while(node!=NULL){
   printf("%d->",node->item);
   node=node->next;
   }
}
// rev alt node
/*struct st * rev_alt(struct st *head){
 struct st *cur=head, *pre=head;
    cur=(cur->next)->next;
  int i=3;
    while(cur!=NULL){
       if(i%3==0 && i%2==1)
        {
//           pre->next=cur->next;
           pre->item=cur->item;
  //         cur->next=pre->next;
           cur->item=pre->item;
    //      if(i==3)
      //      head=pre;
       }
       pre=pre->next;
       cur=cur->next;
    i++;
  }
return head;
}
   
  */
    
