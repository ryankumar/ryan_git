#include<stdio.h>
 typedef struct dt
   {
     int m[12],d,y;
   }DATE;
 DATE date={31,28,31,30,31,30,31,31,30,31,30,31};
#include"test2.c"
void adddate(int,int,int,int);
int main()
 {
	
   int n;
    printf("enter the date,month and year\n");
    scanf("%d%d%d",&dt,&mo,&yr);
    printf("number of days want to add\n");
    scanf("%d",&n);
   adddate(dt,mo,yr,n);
//    printf("after add date is:%d-%d-%d\n",date.d,date.m,date.y);

 }

void adddate(int dt,int mo,int yr) 
 {
   isvaliddate()
