#include<stdio.h>
typedef struct 
{
int day;
int month;
int year;
}DATE;
DATE DOJ;
int main()
{
DATE DOM;
printf("%d %d\n",sizeof(DATE),sizeof(DOJ));
}
