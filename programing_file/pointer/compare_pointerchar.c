//Write a program to take input for two character variables using pointers and find out which character has higher ascii value.

#include<stdio.h>
  int main()
   {
     char ch1='a',ch2='A';
   char *ptr1=&ch1,*ptr2=&ch2;
  *ptr1>*ptr2?printf("'a' has high ascci value than 'A'"):printf("'A' has a high ascii value than 'a'");
  }
