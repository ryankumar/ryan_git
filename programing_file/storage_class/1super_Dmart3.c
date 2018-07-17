#include<stdio.h>
 int purchase(int pur)
   {
	extern int stock1,max;
	int req;
           req=max-stock1;
        if(pur> req)
	   {
		printf("purchase only required amount:%d\n",req);
		return 0;
	   }

	else
	 {
	    stock1=stock1+pur;
	    printf("purchase is successful\n");
             return pur;
	 }
   }
		
