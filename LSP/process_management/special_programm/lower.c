#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
  char ch;
while(( ch=getchar())!=EOF)
   putchar(tolower(ch));
 return 0;
}
