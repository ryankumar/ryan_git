#include<stdio.h>
int main()
{

char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>='A'&& ch<='Z')
printf("character is alphabet:%c",ch);
else
    if(ch>='a' && ch<='z')
       printf("character is alphabet:%c",ch);
   else
       printf("character is a special:%c",ch);
return 0;
}
