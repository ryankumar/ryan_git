#include<stdio.h>
#include<string.h>
 int main()
  {
   char ch1[20]="kernel";
   char ch2[10]="master";
   int n=3;
   printf("strncpy:%s\n",strncpy(ch1,ch2,n));
   printf("after strncpy:%s\n %s\n",ch1,ch2);
 }
