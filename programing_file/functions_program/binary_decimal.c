#include<stdio.h>
int main()
 {
 int  decconver(int);
   int b,d;
  printf("enter the binary number:");
  scanf("%d",&b);
  d=decconver(b);
  printf("%d\n",d);
  return 0;
 }

 int decconver(int b)
   {
    int dec=0,i=1,rem;
      while(b>0)
      {
	rem=b%10;
       b=b/10;
       dec=i*rem+dec;
       i=2*i;
     }
    return dec;
  }

