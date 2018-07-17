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
printf("%lu %lu\n",sizeof(DATE),sizeof(DOJ));
}
