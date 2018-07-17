#include<stdio.h>
 void mystrcat(char[],char[]);
 int main()
  {
    char ch1[20];
    char ch2[10];
	printf("enter the charachter for 1st string:");
	scanf("%s",ch1);
	printf("\n enter the character for 2nd string:");
	scanf("%s",ch2);
	mystrcat(ch1,ch2);
	return 0;
  }
 void mystrcat(char ch1[],char ch2[])
   {
	int i,j,k;
	for(i=0;ch1[i]!='\0';i++)
	  {
	  }
	for(j=0;ch2[j]!='\0';j++)
	   ch1[i+j]=ch2[j];
	printf("after strcat 1st string:%s\n ",ch1);
	printf("after strcat 2nd string:%s\n",ch2);
   }
	
