#include<stdio.h>
#include<string.h>
 int main()
  {
     char name[]="my name is kernel master";
	int c=0,i;
     for(i=0;name[i]!='\0';i++)
      {
 	 if(name[i]==' ')
	   c++;
      }
   if(name[0]==' ' && name[strlen(name)-1]==' ')
      printf("number of words is: %d\n",c-1);
   
   else if(name[0]==' ' && name[strlen(name)-1]!=' ' || name[0]!=' ' && name[strlen(name)-1]==' ')
     printf("number of words are:%d\n",c);

  else printf("number of words are:%d\n",c+1);
  }
