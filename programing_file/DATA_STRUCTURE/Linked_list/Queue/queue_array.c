// r=insert,f=delete
#include<stdio.h>
#include<stdlib.h>
void Enque(void);
void Deque(void);
void display(void);
 int que[10];
int r=-1,f=-1;
int main()
{

     int op;
   while(1){
	   
      printf("choose one option : 1.Enque 2.Deque 3.DISPLAY 4.EXIT\n");
	scanf("%d",&op);
      switch(op){
		case 1:printf("enter element:");
			Enque();
			 break;
	        case 2:printf(":pop element:");
			Deque();	
			break;
		case 3:display();
			break;
  	        case 4:exit(0);
			break;
	        default:printf("enter a valid choice\n");
               
	        }
	   }
return 0;
}
 void Enque(void)
   {
     int data;
	if(r<9)
	 {
	    r++;
	    scanf("%d",&data);
	    que[r]=data;
         }
    else
	printf("Queue is full\n");
	
   }
 void Deque(void)
  {
	if(f==r)
	 {
	   printf("Queue is empty\n");
	 }
   else{
	++f;
        printf("delete : %d\n",que[f]);
      }
  }

void display(void)
 {
   int n=f+1;
  if(r==f)
   {
    printf("Queue is empty\n");
   }
 else{
    while(n<=r)
     {
       printf("%d ",que[n]);
       n++;
     }
  printf("\n");
 }
}
		
