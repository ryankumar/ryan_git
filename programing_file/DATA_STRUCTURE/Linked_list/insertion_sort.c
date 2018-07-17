#include<stdio.h>
#include<stdlib.h>
 
 typedef struct stud
  {
      int item;
     struct stud *next;
  }student;
// CREATION OF NODE
  student * creatnode(int data)
  {
  
    student *node=(student *)malloc(sizeof(student));
     node->item=data;
     node->next=NULL;
    return node;
  }
// INSERTION OF NODE
 student * insertnode(student *Head,int data,int p)
  {
         int i=1;
    student *node=(student *)malloc(sizeof(student)), *c;
       node=creatnode(data);
   c=Head;
         if(Head==NULL)
        {
            Head=node;
            c=node;
                 return Head;
         }
      else if(p==1)        // insert at the position of Head;
         {
           node->next=Head;
           Head=node;
           return Head;
         }
     else
         {
           
              while(i<p-1 && c!=NULL) // 
               {
                  c=c->next;
                  i++;
               }
             if(c==NULL || i>p-1)
                 printf("insertion not possible as position is out of limit");
 
            else
              {
                 node->next=c->next; // insert between two node(given position)
                   c->next=node;
              }
         return Head;
        }
  }

// TRAVERSAL OF NODES
  void traversal(student *Head)
  {
    student *c;
     if(Head==NULL)
       {
          printf("there is no nodes\n");
           return;
       }
    else
      {
          c=Head;
          while(c!=NULL)
          {
            printf("%d\n",c->item);
            c=c->next;
          }
      }
  }

 
 int main()
  {
     student *Head=NULL,*node=NULL,*c=NULL,*PRV=0;
      
       int n,data,i=0,p;
 
   printf("how many nodes want to insert");
   scanf("%d",&n);
   printf("enter the elements for %d-times:\n",n);
   while(i<n)
   { 
      c=Head;p=1;
      scanf("%d",&data);

	while(Head!=NULL && c!=NULL)
	 {
	   if(data< c->item)
	    {
	       break;
	    }
           else if(data >= c->item)
		{
		  c=c->next;
		   p++;
	        }
          }

      Head=insertnode(Head,data,p);
       
      i++;
   }

 printf("after sorting nodes are\n");
  traversal(Head);
}
