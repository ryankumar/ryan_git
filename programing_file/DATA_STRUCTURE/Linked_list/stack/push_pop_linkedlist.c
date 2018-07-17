#include<stdio.h>
#include<stdlib.h>
typedef struct sstack
{
   int item;
    struct sstack *next;
}lstack;

lstack *top=NULL;

void push(int);
void pop(void);
void display(void);
int main()
{
   int choice=1;
  int value;
  while(1)
   {
     printf("enter your choice:1.push,2.pop,3.display,4.exit\n");
     scanf("%d",&choice);
     switch(choice){
     case 1: { printf("enter the value you want to insert into stack\n");
               scanf("%d",&value);
               push(value); }
	     break;
             
     case 2: pop();    break;
     case 3:display(); break;
     case 4: exit(0);   break;
     default: printf("enter a valid choice\n");
    }
  }
}

void push(int data)
 {
   lstack *node=(lstack *) malloc(sizeof(lstack));
   node->item=data;
    if(top==NULL)
       node->next=NULL;
    else
      node->next=top;
    top=node;
  
 }
    
void pop(void)   
 {
   lstack *cur=top;
	 if(top==NULL){
 	 printf("stack is empty,nothing to pop\n");
  	}
 	else {
   	printf("pop : %d\n",cur->item);
   	top=cur->next;
       
    	}
    free(cur);
 }

void display(void)
 {
   lstack *cur=top;
     if(top==NULL){
     printf("stack is empty\n");
     
     }
     else{
  	while(cur!=NULL)
    	 {
            printf("%d ",cur->item);
            cur=cur->next;
         }
       printf("\n");
     }
 }
