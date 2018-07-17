#include<stdio.h>
 void mystrncat(char[],char[],int);
 int main()
  {
    char ch1[20];
    char ch2[10];
	int n;
	printf("enter the charachter for 1st string:");
	scanf("\n%s",ch1);
	
	printf(" enter the character for 2nd string:");
	scanf("\n%s",ch2);
	
	printf("\n how many character want to copy from 2nd string: ");
	scanf("%d",&n);
	
	mystrncat(ch1,ch2,n);
	
	return 0;
  }
 void mystrncat(char ch1[],char ch2[],int n)
   {
	int i,j;
	for(i=0;ch1[i]!='\0';i++)
	  {
	  }
	 	for(j=0;j<n;j++)
	   	  ch1[i+j]=ch2[j];

	   printf("after strcat 1st string:%s\n",ch1);
	   printf("after strcat 2nd string:%s\n",ch2);
   }
	
