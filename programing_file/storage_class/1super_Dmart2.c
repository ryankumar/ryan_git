#include<stdio.h>
 int sell(int se)
   {
 	extern int stock1;
    	if(se>stock1)
		{
		printf("please sell under the limit of stock\n");
		return 0;
		}
	else
	   {
	      stock1=stock1-se;
		printf("selling is successful\n");
	       return se;
	   }
   }
