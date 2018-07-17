#include<stdio.h>
 int lateststock(void);
 void addstock(int);
 int purchase(int pur)
   {
	
	extern int max;
	int req;
	re=max-lateststock();
        if(pur>req)
	   {
		printf("purchase only required amount:%d\n",req);
		return 0;
	   }

	else
	 {
	    addstock(pur);
	    printf("purchase is successful\n");
             return pur;
	 }
   }
		
