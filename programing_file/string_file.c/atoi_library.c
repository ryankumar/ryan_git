#include<stdio.h>
 int atoi(char []);
 int main()
  {
     char str[100];
	int c;
    printf("entre the integer string\n");
      scanf("%[^\n]s",str);
     c=atoi(str);
      printf("%d\n",c);
    
 }
  
int atoi(char str[])
  {
   int i,r=0;

            for(i=0;str[i]!='\0';i++)
    	      {
		if(str[i]=='-')
		continue;
	        else if(str[i]>='0'&& str[i]<='9')
           	    r= r*10+(str[i]-48);
	       }
	 if(str[0]=='-')
	return -r;
	return r;

  }

