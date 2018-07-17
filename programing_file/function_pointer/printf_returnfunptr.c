#include<stdio.h>
int main()
 {
   int (*fun(int))(const char *,...);
   int x;
    int (*ptr)(const char *,...);
    ptr=fun(0);
    ptr("%d",&x);
    ptr=fun(1);
    ptr("%d\n",x);
 }
 int (*fun(int i))(const char *,...)
  {
    if(i==0)
      return scanf;
    else if(i==1)
    return printf;
  }
