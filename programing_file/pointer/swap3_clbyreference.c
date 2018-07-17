
#include<stdio.h>
  int main()
   {
 void swap(int *,int *,int *);
     int x=10,y=20,z=30;
    swap(&x,&y,&z);
 printf("after swap:x=%d,y=%d,z=%d\n",x,y,z);
   }
 void swap(int *px,int *py,int*pz)
   {
  int temp;
   
   temp=*px;
   *px=*py;
   *py=*pz;
   *pz=temp;
  printf("inside fun: x=%d,y=%d,z=%d\n",*px,*py,*pz);
  }
