#include<stdio.h>
#define BIT0_SET(X) (X) |(0X01)
#define BIT0_CLEAR(X) (X) & ~(0X01)
#define BIT1_SET(X) (X) |(0X02)
#define BIT1_CLEAR(X) (X) & ~ (0X02)
#define BIT2_SET(X) (X) |(0X04)
#define BIT2_CLEAR(X) (X) & ~(0X04)
#define BIT3_SET(X) (X) |(0X08)
#define BIT3_CLEAR(X) (X) & ~(0X08)
#define BIT4_SET(X) (X) |(0X10)
#define BIT4_CLEAR(X) (X) & ~(0X10)
#define BIT5_SET(X) (X) |(0X20)
#define BIT5_CLEAR(X) (X) & ~(0X20)
#define BIT6_SET(X) (X) |(0X40)
#define BIT6_CLEAR(X) (X) & ~(0X40)
#define BIT7_SET(X) (X) |(0X80)
#define BIT7_CLEAR(X) (X) & ~(0X80)
int main()
 {
    int a=5;
 printf("SET0:%d\n",BIT0_SET(a));
 printf("CLEAR0:%d\n",BIT0_CLEAR(a));
 printf("SET1:%d\n",BIT1_SET(a));
 printf("CLEAR1:%d\n",BIT1_CLEAR(a));
 printf("SET2:%d\n",BIT2_SET(a));
 printf("CLEAR2:%d\n",BIT2_CLEAR(a));
 printf("SET3:%d\n",BIT3_SET(a));
 printf("CLEAR3:%d\n",BIT3_CLEAR(a));
 printf("SET4:%d\n",BIT4_SET(a));
 printf("CLEAR4:%d\n",BIT4_CLEAR(a));
 printf("SET5:%d\n",BIT5_SET(a));
 printf("CLEAR5:%d\n",BIT5_CLEAR(a));
 printf("SET6:%d\n",BIT6_SET(a));
 printf("CLEAR6:%d\n",BIT6_CLEAR(a));
 printf("SET7:%d\n",BIT7_SET(a));
 printf("CLEAR7:%d\n",BIT7_CLEAR(a));
 return 0;
 }


































































