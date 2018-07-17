#include<stdio.h>
  int mystrlen(char[]);
  int main()
   {
	char ch[100];
	int len;
	printf("entre the name: ");
	scanf("%s",ch);
	len=mystrlen(ch);
	
	printf("strlen is:%d\n",len);
	return 0;
   }
  int mystrlen(char ch[])
    {
	int i;
	for(i=0;ch[i]!='\0';i++)
	  {
           }
return i;
		
	    
    }
