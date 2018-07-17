#include<stdio.h>
  int lateststock();
  void deletestock(int);
 int sell(int se)
   {

    	if(se>lateststock())
		{
		printf("please sell under the limit of stock\n");
		return 0;
		}
	else
	   {
	      deletestock(se);
		printf("selling is successful\n");
	       return se;
	   }
   }
