#include<stdio.h>
 int fact(int);
 int main()
  {
    int x;
 printf("enter the number\n");
 scanf("%d",&x);
 printf("factorial number is:%d\n",fact(x));
 return 0;
  }

int fact(int x)
 {
	if(x==1)
	  return 1;
    //	return x * fact(x-1);
  /* another methode*/
    static int res=1;
	res=res*x;
       fact(x-1);
    return res;
 }
