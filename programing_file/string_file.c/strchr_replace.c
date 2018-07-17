#include<stdio.h>
int mystrchr(char[],char,char);
  int main()
    {
	char ch1[30];
	 char c,c1;
	 int i;
	printf("enter the string: ");
	scanf("%[^\n]s",ch1);
	printf("\n which char want to erase:\n");
	scanf("\n%c",&c);
	 printf("which character want to insert:\n");
	  scanf("\n%c",&c1);
	i=mystrchr(ch1,c,c1);
	if(i>=0)
	      printf("index ch1[%d]: %s\n",i,ch1);
        else
		return 0;
    }
 int mystrchr(char ch[],char c,char c1)
   {
	int i=0;
	while(ch[i]!='\0')
	 {
	    if(ch[i]==c)
	      {
	        ch[i]=c1;
		return i;  
	      }
	  i++;
	}
	printf("character is not available\n");
	return -1;
  }
