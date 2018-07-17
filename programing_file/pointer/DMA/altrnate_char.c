#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 char * fun(char *,char *);
 int main()
  {
    char str1[20];
    char str2[20];
	printf("entre the string\n");
	scanf("%[^\n]s",str1);
	printf("entre the 2nd string\n");
	scanf("\n%[^\n]s",str2);
	printf("%s\n",fun(str1,str2));
  }
char * fun(char *str1,char *str2)
  {
    int l1=strlen(str1),l2=strlen(str2);
	char *str3=(char *)malloc(l1+l2+1);
char *ptr = str3;
	while(*str1!='\0'&& *str2!='\0')
	 {
	     *str3=*str1;
		str1++;
		str3++;
	     *str3=*str2;
		str3++;
		str2++;
	 }
	while(*str1)
	 {
	   *str3=*str1;
		str3++;
		str1++;
	 }
	while(*str2)
	 {
	   *str3=*str2;
		str3++;
		str2++;
	 }
	*str3='\0';
	return ptr;
  }
