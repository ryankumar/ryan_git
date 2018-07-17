#include<stdio.h>
int strlen(char *);
 int main()
 {
	char str[10];
	printf("enter the num string\n");
	scanf("%s",str);
	printf("string length is:%d\n",strlen(str));
 }

int strlen(char *str)
 {
   static int c;
   if(*str=='\0')
	return c;
    c++;
	strlen(++str);
 }
