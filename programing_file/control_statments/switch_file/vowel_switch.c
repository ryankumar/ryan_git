#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
switch(c)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':printf("character is a vowel:%c\n",c);
         break;
default:printf("it is a special or numeric character");

}

return 0;
}
