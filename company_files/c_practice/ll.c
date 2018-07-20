//#include<stdlib.h>
#include "ll.h"

struct node
{
int data;
struct node *ptr_next;
struct node *ptr_next_next;
};
void swap1st2nodes(struct node *);

 struct node *phead=NULL;
int main()
{
	int i,n,ele;
    struct node *phead=NULL;
	puts("no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		puts("enter element");
		if(scanf("%d",&ele))
		{
			createnode(ele);
		}
		else
		{
			puts("invalid input");
			return 0;
		}
	}
	printf("Elements in the node are :\n");
	printlist( );

	
    swap1st2nodes(phead->ptr_next_next);
	puts("after swapping");
	printlist();
	//delete_node(phead->ptr_next);
	delete_node(phead->ptr_next_next);

	//delete_node(phead);
	puts("After deleting node");
	printlist();
	return 0;
}


void delete_node(struct node *ptr)   
{
	struct node  *ptrav=NULL;
	
		ptrav=phead;
        ptrav->ptr_next=phead->ptr_next;
        ptrav->ptr_next_next=phead->ptr_next->ptr_next;

	if(ptr==NULL)
		return;
	if(ptr==phead)
	{
		phead=phead->ptr_next;
		 //phead=ptrav;
		free(ptr);
	}
	else
	{
		while(ptrav->ptr_next != ptr)
		{
			if( ptrav->ptr_next_next!=ptr)
				ptrav=ptrav->ptr_next;
            else{
              ptrav=ptrav->ptr_next;
			   break;
            }
		}
		ptrav->ptr_next= ptr->ptr_next;
		free(ptr);
	}

}
/*

   function for creating a list
   */


void createnode(int val)
{
	struct node *pnew,*ptrav;
	pnew=(struct node*)malloc(sizeof(struct node));
	if(pnew==NULL)
		printf("malloc failed\n");
	pnew->data=val;
	pnew->ptr_next=NULL;
	if(phead==NULL)
	{
	
		phead=pnew;					
		return;
	}
	ptrav=phead;
	while(ptrav->ptr_next!=NULL)
	{
		if( ptrav->ptr_next->ptr_next!=NULL)		
			ptrav->ptr_next_next=ptrav->ptr_next->ptr_next;
		ptrav=ptrav->ptr_next;

	}
	ptrav->ptr_next=pnew;
	
}

/*

   function for swapping two nodes of the list
   
*/

void swap1st2nodes(struct node *rptr)
{

	struct node *p1st=NULL,*p2nd=NULL,*ptrav=NULL,*prv=NULL;
	if(phead==NULL)
	{

		printf("list is empty");
		return;

	}

	p1st=phead->ptr_next;
	p2nd=phead->ptr_next_next;
    prv=phead;
//swapping 1st and 2nd node
    if(rptr==phead){
	phead->ptr_next=p2nd;
	p1st->ptr_next=phead;
	phead=p1st;
    phead->ptr_next_next=phead->ptr_next->ptr_next;
    }
     
    else{
        while(p1st->ptr_next && p1st!=rptr )
        {
            if(p2nd==rptr)
            {
                p1st->ptr_next=p2nd->ptr_next;
                p2nd->ptr_next=p2nd->ptr_next->ptr_next;
                p2nd->ptr_next->ptr_next=p2nd;
                return;
            }
         p1st=p1st->ptr_next;
            
        }
         
        if(p1st==rptr)
         {
            prv->ptr_next=p2nd;
            p1st->ptr_next=p2nd->ptr_next;
            p2nd->ptr_next=p1st;
         }
}
}
/*

   function for printing a list
   
*/

void printlist(void)
{
	struct node *ptrav=NULL;
	
	if(phead==NULL)
	{

		printf("list is empty");
		return;

	}

	ptrav=phead;
	while(ptrav->ptr_next!=NULL)
	{
		//printf("node data:%d \t address:%p  \n",ptrav->data,ptrav);
		printf("node data:%d\t%p\n",ptrav->data,ptrav);
		ptrav=ptrav->ptr_next;
	}
	printf("node data:%d\t%p\n",ptrav->data,ptrav);
}












































