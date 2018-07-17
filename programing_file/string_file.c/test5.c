#include<stdio.h>
#include<string.h>
 char strrev(char,int);
  int main()
   {
     char ch[50];
	int i;
	printf("enter the string:");
	scanf("%[^\n]s",ch);
	printf("string length:%lu\n",strlen(ch));

	  c=strrev(ch,strlen(ch));
	printf("reverse of the string is: ");
/*	for(i=strlen(ch)-1;i>=0;i--)
	 printf("%c",ch[i]);
	printf("\n");*/
    }
	char strrev(char ch,int strlen(ch))
	{
	  int i;
	   for(i=strlen(ch)-1;i>=0;i--)
           return  printf("%c",ch[i]);
          printf("\n");

