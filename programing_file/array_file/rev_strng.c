#include<stdio.h>
  int main()
   {
	int i,j;
	char temp;
	char name[]="ramuk nayr";
	printf("entered character is:");
	
	   for(i=0;i<sizeof(name)-1;i++)
		printf("%c",name[i]);
        	printf("\n");
	printf("reverse of string is:");
		for(i=0,j=sizeof(name)-1;i<j;i++,j--)
	   	{
		    temp=name[i];
		    name[i]=name[j];
		    name[j]=temp;
	        }
	for(i=0;i<sizeof(name);i++)	
	      printf("%c",name[i]);
        	printf("\n");
  }
