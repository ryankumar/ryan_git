#include<stdio.h>
#include<string.h>
void revstr(char *,int);
int main()
 {
   char str[10];
   int l;
  printf("enter the string\n");
  scanf("%s",str);
  l=strlen(str);
  revstr(str,l-1);
 }
 
void revstr(char *ptr,int j)
 {
   if(j<0)
      return;
  printf("%c",ptr[j]);
     revstr(ptr,--j);
 }


 
   
