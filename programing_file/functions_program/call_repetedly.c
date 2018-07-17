#include<stdio.h>
  void fun();
  int main()
  {
    char ch;
    int n,i=0;
	printf("h0w many times do you want to call: ");
	scanf("%d",&n);
	do
	  {
		i++;
		fun();
	    
	  } while(i<n);

	printf("\n");
 }

  void fun()
   {
	static int i;
	int r;
          i++;
	if(i>=11 && i<=13)
	  printf("i am called %dth time",i);
        else if(i>100 && i%100>=11 && i%100<=13)
	   {
	    printf("i am called %dth time",i);
		
	   }
	else
	  {
	      printf("i am called %d",i);
	       r=i%10;
	    switch(r)
	      {
	         case 1:printf("st time");
		        break;
	         case 2: printf("nd time");
		        break;
	         case 3: printf("rd time");
		         break;
	         default:printf("th time");
		
 	      }
          }
    printf("\n");
  }
     
