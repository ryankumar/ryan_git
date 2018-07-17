#include<stdio.h>
#include<stdlib.h>
typedef struct sque
{
   int item;
    struct sque *next;
}lque;

lque *head=NULL;

void push(int);
void pop(void);
void display(void);
int main()
{
  int choice;
  int value;
  while(1)
   {
     printf("enter your choice:1.push,2.pop,3.display,4.exit\n");
     scanf("%d",&choice);
     switch(choice){
     case 1: { printf("enter the value you want to insert into queue\n");
               scanf("%d",&value);
               push(value); }
	       break;
             
     case 2:   pop();    break;
     case 3:   display(); break;
     case 4:   exit(0);   break;
     default:  printf("enter a valid choice\n");
    }
  }
}

void push(int data)
 {
   lque *node=(lque *) malloc(sizeof(lque));
   node->item=data;
    if(head==NULL)
       node->next=NULL;
    else
      node->next=head;
    head=node;
 }
    
void pop(void)   
 {
   lque *cur=head,*pre=head;
	 if(head==NULL){
 	 printf("Queue is empty,nothing to pop\n");
  	}
       
	else if(cur->next==NULL){
         printf("pop : %d\n",cur->item);
         head=NULL;
         }
       
 	else {
            cur=cur->next;
           while(cur->next!=NULL){
            cur=cur->next;
            pre=pre->next;
    	   }
        printf("pop : %d\n",cur->item);
        pre->next=NULL;
       }
 
 }

void display(void)
 {
   lque *cur=head;
     if(head==NULL){
     printf("Queue is empty\n");
     
     }
     else{
  	while(cur->next!=NULL)
    	 {
            printf("%d ",cur->item);
            cur=cur->next;
         }
      printf("%d\n",cur->item);
     }
 }
