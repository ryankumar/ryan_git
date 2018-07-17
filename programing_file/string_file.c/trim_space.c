#include<stdio.h>
#include<string.h>
 void trim(char []);
 int main()
  {
	    char name[100];
		int c;
    	printf("entre the strings:\n");
   	scanf("%[^\n]s",name);
   	printf("befor trim length=%d\n",strlen(name));
   	trim(name);
  	printf("after trim length=%d\n",strlen(name));
	printf("%s\n",name);
 	return 0;
 }

 void trim( char name[])
 {
	int i,c=0,d=0,a;
   for(i=0; name[i]==' ' ;i++)
	 a=++c;
     for(i=strlen(name)-1;name[i]==' ';i--)
          d++;
     for(i=0; i<(strlen(name)-d-a) ;i++,c++)
        name[i]=name[c];
       name[i]='\0';
	
 }
	   
	  
      
