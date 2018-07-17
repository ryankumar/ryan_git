/* book Q-18 */
 #include<stdio.h>
 #include"print_bin.c"
 int main()
 {
   int x,y,c=0;
 printf("enter the 1st number\n");
 scanf("%d",&x);
 print_bin(x);
 printf("\n enter the number want to change\n");
 scanf("%d",&y);
 print_bin(y);
 while(x || y)
  {
     if((x&0x01) != (y&0x01))
       c++;
     x>>=1;
     y>>=1;
  }
 printf("\n no.of bits want need to change:%d\n",c);
 }
