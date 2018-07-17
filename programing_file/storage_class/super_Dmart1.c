#include<stdio.h>
 static int stock;
  int lateststock(void)
    {
	return stock;
    }
 void deletestock(int se)
   {
    
      stock=stock-se;
   }
 void addstock(int pur)
   {
       stock=stock+pur;
   }

     

