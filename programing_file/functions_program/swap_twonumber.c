#include<stdio.h>
 int main()
  {
     void swap(int, int);
   int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
      swap(a,b);
       return 0;
  }
     
 void  swap(int x,int y)
    {
       int z;
  
       z=x;
       x=y;
       y=z;
  printf("%d %d",x,y)  ;
    } 
