#include<stdio.h>
#include<stdlib.h>
typedef struct stud
 {
	int item;
     struct stud *next;
 }student;
#include "creatnode.h"
#include "traversnode.h"
void revprint(student *);
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
printf("revprint of linked list:\n");
  revprint(head);
 
}

void revprint(student *node)
 {
    if(node==NULL)
      return;
    
      revprint(node->next);
	printf("%d\n",node->item);
}
     
	  
