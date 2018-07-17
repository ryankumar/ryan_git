#include<stdio.h>
 void swap(int [],int[]);
 int main()
  {
	int i;
    int a1[10]={1,2,3,4,5,6,7,8,9,10};
    int a2[10]={11,12,13,14,15,16,17,18,19,20};
   swap(a1,a2);
   printf("after swap a1,a2\n");
    for(i=0;i<10;i++)
     printf("a1[%d]=%d,\t a2[%d]=%d,\n",i,a1[i],i,a2[i]);
  }
