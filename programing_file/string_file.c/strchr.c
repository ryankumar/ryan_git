#include<stdio.h>
int mystrchr(char[],char);
  int main()
    {
	char ch1[30];
	 char c;
	 int i;
	printf("enter the string: ");
	scanf("%s",ch1);
	printf("\n which char want to search:");
	scanf("\n%c",&c);
	i=mystrchr(ch1,c);
	if(i>=0)
	      printf("index ch1[%d]\n char=%c\n",i,c);
        else
		return 0;
    }
 int mystrchr(char ch[],char c)
   {
	int i=0;
	while(ch[i]!='\0')
	 {
	    if(ch[i]==c)
		return i;  
	  i++;
	}
	printf("character is not available\n");
	return -1;
  }
