#include<stdio.h>
#define ISLOWER(c) (c>='a'&& c<='z')
#define ISUPPER(c) (c>='A'&& c<='Z')
#define ISALPHA(c) ISLOWER(c) || ISUPPER(c)
#define ISNUMERIC(c) (c>='0' && c<='9')
int main()
 {
    char ch;
	int l;
	printf("enter the character or number:");
	scanf("%c",&ch);
	 if(ISALPHA(ch))
	   printf("this is alphabetic\n");
	else if(ISNUMERIC(ch))
 	   printf("this is numeric\n");
	else
	  printf("this is special character\n");
 }
