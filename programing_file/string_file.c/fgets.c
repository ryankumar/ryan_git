#include<stdio.h>
#include<stdlib.h>
  int main()
   {
    char ch[10];
	fgets(ch,10,stdin);
	fputs(ch,stdout);
	fputs("\n",stdout);
   }
