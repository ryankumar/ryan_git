#include<stdio.h>
 int mystrnicmp(char[],char[],int);
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
	 i=mystrnicmp(ch1,ch2,n);

	if(i<0)
	 printf("%s\n%d\n",ch1,i);

	else if(i>0)
	 printf("%s\n%d\n",ch2,i);

	else
	  printf("both are equal\n%d\n",i);
       return 0;
    }
 int mystrnicmp(char ch1[],char ch2[],int n)
    {
	int i=0,c,in;
	 char temp1[10];
	 char temp2[10];
	while(ch1[i]!='\0' && ch2[i]!='\0' && i<n)
	 {
		temp1[i]=ch1[i];
		temp2[i]=ch2[i];
		 if(ch1[i]>='A' && ch1[i]<='Z')          
                        temp1[i]=ch1[i]+32;
                else if(ch2[i]>='A' && ch2[i]<='Z')
                        temp2[i]=ch2[i]+32;
                   
	    if(temp1[i]==temp2[i])
	         i++;
	   else 
		return temp1[i]-temp2[i];
	  }
	if(i==n)
	   return 0;
	   return ch1[i]-ch2[i];
           
      }		  
	    
	
