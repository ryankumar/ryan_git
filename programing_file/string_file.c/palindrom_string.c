#include<stdio.h>
#include<string.h>
 int main()
  {
    char name[100];
	char pali[100],temp;
     int c=0,i,j;
   printf("entre the name\n");
   scanf("%[^\n]s",name);
  for(j=0,i=strlen(name)-1; i>=0 ;i--,j++)
    {
       pali[j]=name[i];
    }
  for(i=0,j=0;name[i]!='\0' && pali[j]!='\0';i++,j++)
    {
	temp=name[i];
	if(name[i]>='A' && name[i]<='Z')
	  temp=name[i]+32;
	 if(temp!=pali[j])
	    c++;
             break;
     }
  if(c==1)
   printf("not palindrom\n");
 else 
   printf("palindrom\n");
  }
