


#include<stdio.h>
#include<stdlib.h>
#include "struct_node.h"


 LLIST * creat_node(int item);

// INSERTION NODE AT THE END
void insert_node(int item)
 {
	LLIST *temp=NULL;
    LLIST *cur=root;
    cur->n_next=cur->next->next;
	
    temp=creat_node(item);
    	
	if(root==NULL){
		root=temp;
	}
	
	else{
	    cur->next=temp;
	    cur=temp;
	}
	 
}

// CREAT NODE
LLIST * creat_node(int item)
{
	LLIST *temp=(LLIST *) malloc (sizeof(LLIST));
	temp->data=item;
	temp->next=NULL;
  	return temp;
}	

void traverse(void)
{
     LLIST *temp=root;
	if(root==NULL){
		printf("there is no nodes\n");
		return;
	}

	else{
	   	while(temp){
			printf("%d\t",temp->data);
			printf("%p\n",temp);
			temp=temp->next;
		}
		printf("\n");
	 }
}

// SWAP NODE
void swap_node(int item )
{
	
	LLIST *node=root,*after=NULL,*prv=NULL;
	if(root->next==NULL)
	{
	  printf("there is only one node hence swapping not possible\n");
	   return;
	}

	if(root->data==item){
		if(node->next->next)
		node->n_next = node->next->next;
		after=node->next;
		node->next= node->n_next;
		after->next=node;
	
		root=after;
	}
	
	else{
		prv=node;
	      node=node->next;
	      after=node->next;
		
		while(item!=node->data && node)
		{
		  if(node->next==NULL)   
		   {
			printf("element is at last node,hence swapping is not possible\n");
			return;
		   }
		  node=node->next;
		  after=after->next;
		   prv=prv->next;
		 }
		if(node==NULL)
		{
			printf("enter a valid value for swaping\n");
			return;
		}
		else{
		  
                  prv->next=after;
		  node->next=after->next;
	          after->next=node;
		  }
		
}
}

//DELETION OF NODE

void delete_node(int item)
{
	LLIST *ptr=root;
	LLIST *prv=ptr;

	if(root==NULL){
		printf("there is no node\n");
		 return;
	}
	
	else{
			if(item==root->data){
					root=ptr->next;
					ptr=NULL;
					return;
 			}
			else{
			       ptr=ptr->next;
			        while(item!=ptr->data && ptr)
			         {
				   ptr=ptr->next;
				   prv=prv->next;
				 }
				if(ptr==NULL)
				{
				 printf("there is no data matching\n");
					return;
				}
				prv->next=ptr->next;
				ptr=NULL;
			}
	   }
}
		
int main()
{
        int item,n=10,i;
        printf("enter 10 nodes:\n ");
        for(i=0;i<n;i++){
                scanf("%d",&item);
                insert_node(item);
        }

        printf("entered elements are: \n");
        traverse();

        printf("insert a node at the end of node:\n");
        scanf("%d",&item);
        insert_node(item);

        printf("after insertion elements are:\n");
        traverse();

        printf("enter the value for swapping:\n");
        scanf("%d",&item);
        printf("after swaping two nodes:\n");
        swap_node(item);
        traverse();

        printf("choose one node to delete a node :\n");
        scanf("%d",&item);
        delete_node(item);
        printf("after delete node:\n");
        traverse();
        return 0;
}					
