#include<stdio.h>
int main()
 {
    int x,c=0;
  printf("enter the number\n");
  scanf("%d",&x);
/*  while(x)
   {
 	if(x & 0x01)
	 c++;
      x=x>>1;
   }
 printf("number of 1's:%d\n",c);
 if(c==1)
  printf("number is power of 2\n");
 else printf("number is not power of 2\n");
 }
 */
 
/* in above programm loop is continuing upto x==0 ,so itteration process takes place for long term*/
/* so reduce itteration process we hwve to write*/
/* while(x)
  {
    x= x & (x-1);
     c++;
    printf("count=%d\n",c);
  }
  if(c==1)
  printf("number is power of 2\n");
 else printf("number is not power of 2\n");
}
 */

 /* if x=0 it is not multiplied by 2*/
 if(x && !(x&(x-1)))
   printf("power of 2\n");
 else printf("not power of 2\n");
 }
