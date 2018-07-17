#include<stdio.h>
#include<string.h>
 int main()
  {
     char ch1[20];//="kernel";
    char ch2[10];//="master";
 	printf("enter the string1: ");
	fgets(ch1,20,stdin);
	printf("entre the string2: ");
	fgets(ch2,10,stdin);
   printf("strcat:%s\n",strcat(ch1,ch2));
  // printf("after strcat:%s\n%s\n",ch1,ch2);
 }
