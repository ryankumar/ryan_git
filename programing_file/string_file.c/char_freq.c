#include<stdio.h>
 int main()
  {
   char name[100],ch;
	int c,i,j,c1=0;;
   printf("enter the string\n");
   scanf("%[^\n]s",name);
    for(i=0;name[i]!='\0';i++)
      {
	
	    ch=name[i];
	      c=0;
	        for(j=0;name[j]!='\0';j++)
                 {
		    if(name[j]==ch)
		      c++;
	         }
	if(c==1)
	 { c1++;
	   printf("non-repeted %d=%c index\n",i,name[i]);}
        
     
      }
	if(c1==0)
            printf("all are repeted\n");
  }
               	
