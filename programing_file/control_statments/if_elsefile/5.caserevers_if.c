#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
printf("%c\n",ch+32);
else
printf("%c\n",ch-32);
return 0;

}
