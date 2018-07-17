#include<stdio.h>
 void fun(int[],int[]);
  int main()
    {
	int arr1[20]={1,2,3,4,5,6};
	int arr2[10]={7,8,9,10};
	int i;
	fun(arr1,arr2);
	printf("after fun call arr1 in  main: ");
	for(i=0;i<6;i++)
	  printf("%d,",arr1[i]);
	  printf("\n after fun call arr2 in main: ");
	for(i=0;i<4;i++)
	  printf("%d,",arr2[i]);
	   printf("\n");
	return 0;
   }
   void fun(int arr1[],int arr2[])
     {
	int i;
	printf("arr1 inside fun is: ");
	for(i=0;i<6;i++)
     {	  arr1[i]=arr1[i]*2;
	printf("%d,",arr1[i]);
	
    }
	printf("arr2 inside fun is: ");
	   for(i=0;i<4;i++)
      {	   arr2[i]=i+1;
	   printf("%d,",arr2[i]);
      }
  }
