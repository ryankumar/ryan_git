#include<stdio.h>
 int mystrcmp(char *,char *);
   int main()
     {
	char ch1[20];
	char ch2[20];
	int i;
	printf("enter the 1st string: ");
	scanf("\n%[^\n]s",ch1);
	printf("\nenter the 2nd string: ");
	scanf("\n%[^\n]s",ch2);
	 i=mystrcmp(ch1,ch2);
	if(i<0)
	 printf("%s\n%d\n",ch1,i);
	else if(i>0)
	 printf("%s\n%d\n",ch2,i);
	else
	  printf("both are equal\n%d\n",i);
       return 0;
    }
/* int mystrcmp(char ch1[],char ch2[])
    {
	int i=0,c=0,in;
	while(ch1[i]!='\0' && ch2[i]!='\0')
	 {
		
	    if(ch1[i]==ch2[i])
	     {
		i++;
	       
	     }
	   else {
		c= ch1[i]-ch2[i];
		in=i;
		printf("char is big/small in index number ch[%d]\n",in);
		return c;
		}
	    
         }
	   return ch1[i]-ch2[i];
           
    }		  
*/


   int mystrcmp(char *p1,char *p2)	    
    {
      for(;*p1!='\0'&& *p2!='\0' && *p1==*p2;p1++,p2++)
        {
 	 }
	 return *p1-*p2;
    }
	
