#include<stdio.h>
 void mystrlwr(char[]);
  int main()
    {
	char ch[100];
	printf("enter the characters in any case :");
	scanf("%s",ch);
	mystrlwr(ch);
	return 0;
   }
  void mystrlwr(char ch[])
    {
	int i=0;
	printf("after strupr: ");
	while(ch[i]!='\0')
	{

	if(ch[i]>='a' && ch[i]<='z')
	 printf("%c",ch[i]-32);
	else
	 printf("%c",ch[i]);
	i++;
	}
    }
