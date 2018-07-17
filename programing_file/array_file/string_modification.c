#include<stdio.h>
#include<string.h>
 void fun(char[],char[]);
  int main()
    {
	char arr1[20]="abcdef";
	char arr2[10]="ghij";
	int i;
	fun(arr1,arr2);
	printf("after fun call arr1 in  main:%s\n ",arr1);
	  printf("\n after fun call arr2 in main:%s\n ",arr2);
		return 0;
   }
   void fun(char arr1[],char arr2[])
     {
	int i;
	printf("arr1 inside fun is: ");
	for(i=0;i<strlen(arr1);i++)
	  arr1[i]=arr1[i]-32;
	printf("%s\n",arr1);
	
    
	printf("arr2 inside fun is: ");
	   for(i=0;i<strlen(arr2);i++)
      	   arr2[i]=arr2[i]-32;
	   printf("%s\n",arr2);
      
  }
