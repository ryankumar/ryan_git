#include<stdio.h>
#include<string.h>
 int main()
  {
     char ch1[20]="kernel";
    char ch2[10]="master";
   int n=3;
   printf("strncat:%s\n",strncat(ch1,ch2,n));
   printf("after strncat:%s\n%s\n",ch1,ch2);
 }
