#include<stdio.h>
#define BIT_SET(x,p) 	 (x) |((0X01)<<p)
#define BIT_CLEAR(x,p)  (x) & ~((0X01)<<p)
#define TOGGLE_BIT(x,p)	 (x) ^ ((0X01)<<p)
int main()
 {
    int a,p;
 printf("enter the number\n");
 scanf("%d",&a);
 printf("enter the position\n");
 scanf("%d",&p);
 printf("SETp:%d\n",BIT_SET(a,p));
 printf("CLEARp:%d\n",BIT_CLEAR(a,p));
 printf("TOGGLEp:%d\n",TOGGLE_BIT(a,p));
 return 0;
 }


































































