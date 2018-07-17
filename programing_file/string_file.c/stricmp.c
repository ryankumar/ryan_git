#include<stdio.h>
 int mystricmp(char[],char[]);
   int main()
     {
	char ch1[20];
	char ch2[20];
	int i;
	 printf("enter the string for 1st array: ");
	 scanf("%s",ch1);
	  printf("\n enter the string for 2nd array: ");
	   scanf("%s",ch2);

	 i=mystricmp(ch1,ch2);

	if(i<0)
	 printf("%s\n%d\n",ch1,i);

	else if(i>0)
	 printf("%s\n%d\n",ch2,i);

	else
	  printf("both are equal\n%d\n",i);
       return 0;
    }
 int mystricmp(char ch1[],char ch2[])
    {
	int i=0,c,in;
	char temp1[10];
	char temp2[10];
	while(ch1[i]!='\0' && ch2[i]!='\0')
	 {
	
		temp1[i]=ch1[i];
		temp2[i]=ch2[i];
		
		if(ch1[i]>='A' && ch1[i]<='Z')		
		       temp1[i]=ch1[i]+32;
					  	
		 if(ch2[i]>='A' && ch2[i]<='Z')
			temp2[i]=ch2[i]+32;
		   
	    if(temp1[i]==temp2[i])
	        i++;
	      
	   else {
		c= temp1[i]-temp2[i];
		in=i;
		printf("char is small in index number ch[%d]\n",in);
		return c;
		}
       	 }	   
	  return c=ch1[i]-ch2[i];
    }		  
	    
	
