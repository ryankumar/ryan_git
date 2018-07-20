#include<stdio.h>
#include<stdlib.h>
#include "struct_dll.h"

DLL *cur=NULL,*prv=NULL;
int main()
{
	char ch;
	int dt;
        int count;
	do{
	printf("enter the data\n");
	scanf("%d",&dt);
	insert_node(dt);
	printf("do you want to enter again y/n : ");
        scanf("\n%c",&ch);
 	}while(ch=='y');

    printf("Before sorting elements inside the DLL is:\n");
    count=traverse();
   
    printf("after Bubble sort elements inside the Dll is:\n");
    sort(count );
   count=traverse();
 }



//Insert node
void insert_node(int item)
{
	DLL *node=NULL;
	
	 node=creat_node(item);
	 if(Head==NULL)
	 {
		Head=node;
		cur=Head;
	 }
	
	else {
		cur->right=node;
		prv=cur;
		cur=node;
		cur->left=prv;
	     }

}

// Create Node
DLL * creat_node(int item)
{

	DLL *node=(DLL *) malloc(sizeof(DLL));
		
	node->data=item;
	node->left=NULL;
	node->right=NULL;
	
	return node;
}

// DLL Traverse
int traverse(void)
{
	int count=0;
	DLL *temp=Head;
	if(Head==NULL)
	 {
		printf("there is no node available\n");
		
	        return count;
	 }
	
	else{
		while(temp)
		{	
			printf("%d\t",temp->data);
			printf("%p\n",temp);
			temp=temp->right;
			count++;
		}
 	    	printf("count:%d\n",count);
		return count;
	    }
         
}


 void sort(int count)
{
    DLL *after=NULL,*current=NULL,*before=NULL,*nextone;
    int i,j,k=0,l=0,m=0,n=0;
    for(i=0;i<count;i++)
    {
     current = Head;
        for(j=0;j<count-1;j++ )
        {	
        
		if(current->data > current->right->data)
	 	{
    			before = current->left;
    			after = current->right;
			nextone=after->right;
    			if(before != NULL){
       		 		before->right = after;
    				}
    			current->right = after->right;
    			current->left = after;
    			after->right = current;
    			after->left = before;
			if(nextone)
			nextone->left=current;
			
			if(current==Head)
			 Head=current->left;
			continue;	
	 	}
	    else
		current=current->right;
	}
    }
}

