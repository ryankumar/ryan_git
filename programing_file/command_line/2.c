#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
 {
	printf("no. of argc %d\n",argc);
   if(argv[1][0]=='-' && argv[1][1]=='r' && argv[1][2]=='\0')
	 
	   printf("u r rt\n");
	else printf("wrong\n");
 }
