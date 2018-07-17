#include<stdio.h>
 void swap(int *arr)
  {
    int i=0,temp;
 
    temp=*arr;
    *arr=*(arr+1);
    *(arr+1)=temp;
  }
