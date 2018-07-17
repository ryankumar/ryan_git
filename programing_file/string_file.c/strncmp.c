#include<stdio.h>
 int mystrncmp(char[],char[],int);
   int main()
     {
	char ch1[20];
	char ch2[20];
	int i,n;
	 printf("enter the string for 1st array: ");
	 scanf("%s",ch1);
	  printf("\n enter the string for 2nd array: ");
	   scanf("%s",ch2);
	  
	   printf("how many character want to compare: ");
	    scanf("%d",&n);
	 i=mystrncmp(ch1,ch2,n);

	if(i<0)
	 printf("%s\n%d\n",ch1,i);

	else if(i>0)
	 printf("%s\n%d\n",ch2,i);

	else
	  printf("both are equal\n%d\n",i);
       return 0;
    }
 int mystrncmp(char ch1[],char ch2[],int n)
    {
	int i=0;
	while(ch1[i]!='\0' && ch2[i]!='\0' && i<n)
	 {
			   
	    if(ch1[i]==ch2[i])
	     	i++;
	     
	   else 
	   return ch1[i]-ch2[i];
		

         }
	if(i==n)
	   return ch1[i-1]-ch2[i-1];
	   return ch1[i]-ch2[i];
           
    }		  
	    
	
