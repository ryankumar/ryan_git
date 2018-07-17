#include<stdio.h>
void mystrcpy(char[],char[]);
 int main()
  {
    char ch1[20];
    char ch2[10];
	printf("enter the charachter for 1st string:");
	scanf("%s",ch1);
	printf("\n enter the character for 2nd string:");
	scanf("%s",ch2);
           mystrcpy(ch1,ch2);
	return 0;
  }
void mystrcpy(char ch1[],char ch2[])
   {
	int i,j;
/*	for(j=0;ch2[j]!='\0';j++)
	   {
	    }
            for(i=0;i<=j;i++)
	    ch1[i]=ch2[i];
	printf("after strcpy 1st string:%s\n",ch1);
	printf("after strcpy 2nd string:%s\n",ch2);*/
      i=0;
	while(ch1[i]=ch2[i])
	      i++;
	 printf("after strcpy:%s\n", ch1);
	
   }
	
