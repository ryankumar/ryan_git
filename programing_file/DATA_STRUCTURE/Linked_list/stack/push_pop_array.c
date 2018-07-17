#include<stdio.h>
#include<stdlib.h>
int push(int *,int);
int pop(int *,int);
 int stack[10];
int top=-1;
int main()
{

     int op;
   while(1){
	   
      printf("choose one option : 1.PUSH 2.POP 3.EXIT\n");
	scanf("%d",&op);
      switch(op){
		case 1:{printf("enter element:");top=push(stack,top);}break;
	        case 2:{printf(":pop element:");top=pop(stack,top);}break;
		default:exit(0);
	        }
	    
	}
}
 int push(int * stack,int top)
   {
     int data;
	if(top<9)
	 {
	    top++;
	    scanf("%d",&data);
	    stack[top]=data;
         }
    else
	printf("stack is full\n");
	 return top;
   }
 int pop(int *stack,int top)
  {
	if(top>=0)
	 {
		printf("%d\n",stack[top]);
	    top--;
	 }
   else
	printf("stack is empty\n");
      return top;
  }
	  		
		
