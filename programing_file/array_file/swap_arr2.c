#include<stdio.h>
 void swap(int a[],int b[])
  {
   int i,temp;
   for(i=0;i<10;i++)
    {
      temp=a[i];
     a[i]=b[i];
     b[i]=temp;
   }
 }
