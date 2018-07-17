#include<stdio.h>
#include<stdlib.h>

typedef struct stud
{
  int item;
   struct stud *next;
}student;

student * creatnode(int);
void traversal(student *Head);
student * insertnode(student * Head,int p);
student * insertnode1(student * Head,int p);
student * deletenode(student * Head,int p);

// MAIN FUN
int main()
{
  student *Head=NULL,*node=NULL,*c=NULL;
  int n,data,i=0,p;
 
  printf("how many nodes want to creat");
  scanf("%d",&n);
  printf("enter the elements for %d-times:\n",n);
  while(i<n)
   {
     scanf("%d",&data);
     node= creatnode(data);
     
     if(Head==NULL)
      {
	Head=node;
	c=node;
      }
    else
      {
	c->next=node;
	c=node;
      }
	i++;
   }
     printf("enter the position to insert elements:\n");
     scanf("%d",&p);
     Head=insertnode(Head, p);
   
     printf("display elements after insert at perticular position\n");
       traversal(Head);

     printf("enter the value after which do you want to insert new elements:\n");
      scanf("%d",&p);
      Head=insertnode1(Head, p);
      
      printf("display all  element after insert :\n");
       traversal(Head);
    
       printf("enter the position want to delete:\n");
	scanf("%d",&p);
	Head=deletenode(Head,p);
 
      printf("display all  element :\n");
      traversal(Head);

}

// CREATION OF NODE
student * creatnode(int data)
{
  
  student *node=(student *)malloc(sizeof(student));
   node->item=data;
   node->next=NULL;
  return node;
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

// INSERTION OF NODE BY USING POSITION
student * insertnode(student *Head,int p)
{
  int data,i=1;
   student *node=(student *)malloc(sizeof(student)), *c;
  printf("enter the item to insert");
   scanf("%d",&data);
   node=creatnode(data);
    
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
	  c=node;
	  return Head;
        }
    else
	{
	   c=Head;
	     while(i<p-1 && c!=NULL) // 
	      {
	         c=c->next;
		  i++;
	      }
            if(c==NULL || i>p-1)
	        printf("insertion not possible as position is out of limit");
        
            else if(i==p-1)    // insertion after the end node
	     {
	        c->next=node;
             }
           else
             {
	         node->next=c->next; // insert between two node(given position)
	          c->next=node;
	     }
	return Head;
       
        }
}

 // INSERTION OF NODE BY USING VALUE
 student *insertnode1(student *Head,int p)
 {
   int data,i=1;
    student *node=(student *)malloc(sizeof(student)), *c;
   printf("enter the item to insert");
    scanf("%d",&data);
    node=creatnode(data);
    c=Head;
         if(Head==NULL)
         {
            printf("insertion is not possible\n");
                 return Head;
         }
      else if(p==c->item && c==Head)   // insert at the position of Head
         {
           node->next=Head;
           Head=node;
           c=node;
           return Head;
         }
     else
         {
           while(p!=c->item && c!=NULL) // insert at after give value
            {
	      
              c=c->next;
  
            }
         if(c==NULL)
          printf("insertion not possible as entered value is not available in nodes\n");
 
         else{
          node->next=c->next;
          c->next=node;
          }
         return Head;
 
        }
     }

   // DELETE OF NODE BY USING POSITION
  student *deletenode(student *Head,int p)
  {
    int data,i=1;
     student  *c,*prv;
   
     c=Head;
     prv=Head;
          if(Head==NULL)
          {
             printf("deletion is not possible\n");
                  return Head;
          }
       else if(p==1)   // delete at the position of Head
          {
            Head=c->next;
            free(c);
            return Head;
          }
      else
          {
	    c=c->next;
            while(i<p-1 && c!=NULL) // delete at given position
             {
 
               c=c->next;
               prv=prv->next;
               i++;
             }
          if(c==NULL || i>=p-1)
           printf("deletion is not possible at given place\n");
 
          else{
           prv->next=c->next;
            free(c);
           }
          return Head;
 
         }
      }
	
