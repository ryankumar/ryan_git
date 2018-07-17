#include<stdio.h>
 int main()
  {
	int m;
    char month[12][20]={"january","february","march","april","may","jun","july","august","september","october","november","december"};
	printf("enter a number for getting a month ");
	scanf("%d",&m);
	 while(m<1 ||m>12)
            {
	   printf("enter the number within 1-12 ");
	    scanf("%d",&m);
 	    }
	      printf("enterd month is:%s\n",month[m-1]);
	return 0;
   }

