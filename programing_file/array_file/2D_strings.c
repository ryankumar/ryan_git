#include<stdio.h>
 int main()
  {
   char name[5][20];
	int i;
	printf("enter the set of names ");
	for(i=0;i<5;i++)
	  scanf("\n%s",name[i]);

	 printf("\n entered names are\n");
      for(i=0;i<5;i++)
	 printf("%s\n",name[i]);
  }

