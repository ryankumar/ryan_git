#include<stdio.h>
int atoi(char []);
int main(int argc,char *argv[])
 {
   printf("no of arguments are:%d\n",argc);
 	int i,n;

	  if(*argv[2]=='+')
       	     	n=atoi(argv[1])+atoi(argv[3]);
	  else if(*argv[2]=='-')
		n=atoi(argv[1]) - atoi(argv[3]);

	  else if(*argv[2]=='*')
                n=atoi(argv[1]) * atoi(argv[3]);

	   else if(*argv[2]=='/')
	        n=atoi(argv[1]) / atoi(argv[3]);

	    else
		n=atoi(argv[1]) % atoi(argv[3]);

	 printf("%d\n",n);
 }
 int atoi(char str[])
  {
   int i,r=0;
    	     for(i=0;str[i]!='\0';i++)
        	{
		  if(str[i]=='-')
		    continue;
                  if(str[i]>='0'&& str[i]<='9')
                    r= r*10+(str[i]-48);
        	}
	  if(str[0]=='-')
           return -r;
             return r;

  }
