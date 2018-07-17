#include<stdio.h>
int mystrstr(char[],char[],char[]);
  int main()
    {
	char ch1[30];
	 char ch2[30];
	  char ch3[30];
	 int i;
	printf("enter the string: ");
	scanf("%[^\n]s",ch1);
	printf("\n enter the 2nd string:");
	scanf("\n%[^\n]s",ch2);
	printf("enter the string to replace\n");
	 scanf("\n%[^\n]s",ch3);
	i=mystrstr(ch1,ch2,ch3);
	      printf("%d\n",i);
	return 0;
	 
    }
 int mystrstr(char ch1[],char ch2[],char ch3[])
   {
	int i,j,c=0;
	for(i=0,j=0;ch1[i]!='\0' && ch2[j]!='\0'; )
	   {
	
		  if(ch2[j]==ch1[i])
		   {
		     
		   c=i++;
		     j++;
		
                   }
	      else if(ch2[j]!=ch1[i] && ch2[0]!=ch1[i])  // if this condition is false then 'i' will not increase and will go to loop again;
		    {
		     i++;
			j=0;
		    }
		 else 
		     j=0;
		
	   }
    if(ch1[i]=='\0'&& ch2[j]!='\0')
       {
	 printf("no string is available\n");
	  return -1;
       }
	 
    else { 
	   for(i=c-j+1,j=0;ch3[j]!='\0';i++,j++)  
	     ch1[i]=ch3[j];
	   printf("after replace,new string is:%s\n",ch1);
	        return c-j+1;	
         }
  }

