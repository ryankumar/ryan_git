#include<stdio.h>
 void mystrcpy(char[],char[],int);
 int main()
  {
    char ch1[20];
    char ch2[10];
	int n;
	printf("enter the charachter for 1st string:");
	scanf("%s",ch1);

	printf("\n enter the character for 2nd string:");
	scanf("%s",ch2);
	
	printf("how many character want to copy from 2nd string: ");
	scanf("%d",&n);

	mystrcpy(ch1,ch2,n);
	return 0;
  }
 void mystrcpy(char ch1[],char ch2[],int n)
   {
	int i,j;
	
	for(i=0;i<n;i++)
	    ch1[i]=ch2[i];
	
	printf("after strcpy 1st string:%s\n",ch1);
			
	printf("after strcat 2nd string:%s\n",ch2);
   }
	
