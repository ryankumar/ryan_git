#include<stdio.h>
#include<stdlib.h>
typedef struct stud
 {
	int item;
     struct stud *next;
 }student;
#include "creatnode.h"
#include "traversnode.h"
int main()
{
 student *head=0,*c=0,*node=0,*n=0,*p=0;
   int num,i=0,data;
    printf("how many nodes want to creat\n");
    scanf("%d",&num);
   printf("enter the data\n");

 while(i<num){
         node=(student *) malloc(sizeof(student));
	   scanf("%d",&data);
	  node= creatnode(data);
	  if(head==NULL)
	   {
	      head=node;
	      c=node;
	   }
	  else
	   {
	     c->next=node;
	     c=node;
	   }
	  i++;
	 }
  printf("before reverse linkedlist is\n");
   traversal(head);
  // Reverse linked
    
    p=c=n=head;
    c=c->next;
    n=c->next;
   while(c!=NULL){
		c->next=p;
		p=c;
		c=n;
		if(n!=NULL)
		  n=n->next;
	       }
         head->next=NULL;
	head=p;
    printf("after reverse the link\n");
	traversal(head);
}
     
	  
