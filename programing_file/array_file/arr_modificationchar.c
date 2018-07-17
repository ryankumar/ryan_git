#include<stdio.h>
 void fun(char[],char[]);
  int main()
    {
	char arr1[20]={'a','b','c','d','e','f'};
	char arr2[10]={'g','h','i','j'};
	int i;
	fun(arr1,arr2);
	printf("after fun call arr1 in  main: ");
	for(i=0;i<6;i++)
	  printf("%c,",arr1[i]);
	  printf("\n after fun call arr2 in main: ");
	for(i=0;i<4;i++)
	  printf("%c,",arr2[i]);
	   printf("\n");
	return 0;
   }
   void fun(char arr1[],char arr2[])
     {
	int i;
	printf("arr1 inside fun is: ");
	for(i=0;i<6;i++)
     {	  arr1[i]=arr1[i]-32;
	printf("%c,",arr1[i]);
	
    }
	printf("arr2 inside fun is: ");
	   for(i=0;i<4;i++)
      {	   arr2[i]=arr2[i]-32;
	   printf("%c,",arr2[i]);
      }
  }
