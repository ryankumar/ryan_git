#include<stdio.h>
int main()
{

char c,e,i,o,u,A,E,I,O,U,a;
printf("enter the character");
scanf("%c",&c);
//c==(a,e,i,o,u) || c==(A,E,I,O,U) ? printf("char is vowel"):printf("char is not vowel");command does not exist.
(( c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))||((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')) ?printf("vowel"):printf("not vowel");
return 0;


}
