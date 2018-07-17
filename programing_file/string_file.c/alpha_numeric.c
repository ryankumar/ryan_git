#include<stdio.h>
 #include<string.h>
 int fun(char []);
 int main()
  {
    char str[100];
	int c;
   printf("entre the string:\n");
   scanf("%[^\n]s",str);
    c=fun(str);
  if(c==1)
     printf("alphabetic\n");
  if(c==0)
    printf("numeric\n");
  if(c==-1)
   printf("alphanumeric\n");
 return 0;
  }
 
 int fun(char str[])
  {
   int c=0,i,d=0;
    for(i=0;str[i]!='\0';i++)
	 {
	     if( (str[i]>='0' && str[i]<='9') && !(str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z') )
	         c++;
	     else  if( (str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z') && !(str[i]>='0' && str[i]<='9') )
	         d++;
	       
	 }
     if(c==strlen(str))
	return 0;
     else if(d==strlen(str))
	return 1;
       return -1;
  }
      
