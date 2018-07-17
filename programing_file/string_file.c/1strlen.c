#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int main()
  {
    char ch[20];
	int len;
//	printf("entre string: ");
//	scanf("%[^\n]s",ch);
	fgets(ch,20,stdin);
	fputs(ch,stdout);
//	len=strlen("madhaba");
	len=strlen(ch);
	printf("%d\n",len);
  }
