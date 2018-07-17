#include<stdio.h>
 static int stock;
  extern int stock1;
  int lateststock(void)
    {
	stock=stock1;
	stock1=stock;
	return stock;
    }
 

