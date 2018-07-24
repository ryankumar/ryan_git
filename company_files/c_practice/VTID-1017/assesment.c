#include<stdio.h>
#include<stdlib.h>
#include "struct.h"
LL *head = NULL;

void insert_node(LL * rptr)
{
    LL * temp,*temp1;
    temp=head;
    temp1=head;

    if(head==NULL)
    {
        head=rptr;
        return;
    }
    
    while(temp->next)
    {
        if(temp->next->next != NULL)
        {
    	    temp->next_next = temp->next->next;
        }
    	temp1=temp;
        temp=temp->next;
    }
    
    temp->next=rptr;
    temp1->next_next=rptr;
}

void traverse(LL *hptr)
{
        if(head==NULL)
	{
	     printf("there is no node\n");
	      return;
        }
      
        while(hptr)
    	{
        	printf("%d\t %p\n",hptr->data,hptr);
     		hptr=hptr->next;
    	}

}


void swap_node(LL * ptr)
{
    LL *temp=head;
    LL *tmp = temp->next;
    LL *ntmp = ptr->next;
    LL *nntmp =ptr->next_next;
	
	
	if(ptr->next_next==NULL)
	     nntmp=NULL;	   

	if(ptr->next==NULL)
        {
		 printf("there is no node available to swap\n");
	 	 return;
        }
        
	if(ptr == head)		// This is for swapping of head node
	{
        
	        ptr->next=ptr->next->next;
	        ptr->next_next = ntmp->next_next;
	        ntmp->next = ptr;
	        ntmp->next_next = nntmp;
	        head = ntmp;
	        return;
        }
      
       while(temp->next != ptr)
       {
	    if(temp->next_next ==ptr)         // This is for swapping of any midle two conjecutive node
  	    {
		temp->next_next=ntmp;
		tmp->next=ntmp;
    		tmp->next_next=ptr;
		ptr->next=nntmp;
		if(nntmp==NULL)
		ptr->next_next=NULL;
		else
		ptr->next_next=nntmp->next;
		ntmp->next=ptr;
		ntmp->next_next=nntmp;
		return;
	    }
        
	   temp=temp->next;
	   tmp=tmp->next;
      }
      temp->next=ptr->next;  // This is for swapping of 2nd node and 3rd node
      temp->next_next=ptr;
      ptr->next=nntmp;
      ptr->next_next=nntmp->next;
      ntmp->next=ptr;
      ntmp->next_next=nntmp;
 } 


void delete_node(LL *ptr)
{
    LL * temp=head,*temp1=temp->next;
    
	if(ptr==NULL)
	   return;
	if(ptr==head)
    	{
        	head=ptr->next;
       		free(ptr);
    	}
    	else
    	{
        	while(temp->next != ptr)
       		{
           		if(temp->next_next==ptr)
            		{
            			temp->next_next=ptr->next;
            			temp1->next=ptr->next;
           			temp1->next_next=ptr->next->next;
             			free(ptr);
            			return;
             		}
           		temp=temp->next;
	    		temp1=temp1->next;
        	}
            temp->next=ptr->next;
            temp->next_next=ptr->next->next;
            free(ptr);
        }
}
    
          
int main()
{
    int num,ele,i;
    LL *temp=NULL;
    printf("Enter the Number of nodes:");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("Enter data:");
        scanf("%d",&ele);
        LL *temp =(LL *)malloc(sizeof(LL));
        if(temp==NULL)
	{
            printf("malloc is faild\n");
            return 0;
        }
        temp->data=ele;
        temp->next=NULL;
        temp->next_next=NULL;
        insert_node(temp);
    }

    printf("entered elements are:\n");
    traverse(head);
   
    printf("%d\n",head->next_next->next_next->data);

    printf("After swapping elements are:\n");
    swap_node(head->next_next->next_next);
    traverse(head);
 
    printf("%d\n",head->next_next->next_next->data);
 
    printf("Deleting nth node:\n");
    delete_node(head->next_next->next_next->next);
    traverse(head);
}



