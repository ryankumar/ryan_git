#include<stdio.h>
 typedef struct dt
   {
     int d,m,y;
   }DATE;
 DATE date;
#include"test1.c"
#include"test2.c"
void adddate(DATE *,int);
//void subdate(DATE *,int);
int main()
 {
   int n;
    printf("enter the date,month and year\n");
    scanf("%d%d%d",&date.d,&date.m,&date.y);
    printf("number of days want to add\n");
    scanf("%d",&n);
   adddate(&date,n);
    printf("after add date is:%d-%d-%d\n",date.d,date.m,date.y);
 //  subdate(&date,n);
   // printf("after substraction date is:%d-%d-%d\n",date.d,date.m,date.y);
 }
 
