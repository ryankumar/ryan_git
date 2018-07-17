#include<stdio.h>
 void check(int);
    int main()
    {
      int x;
    printf("enter the number\n");
    scanf("%d",&x);
    check(x);
    }
   void check(int a)
   {
     int b[32],l,i,s;
     l=s=sizeof(a)*8;
    while(l>0)
    {
      b[l-1]= a & (0x01);
	a=a>>1;
       l--;
    }
   for(i=0;i<s;i++)
    printf("%d",b[i]);

   }
