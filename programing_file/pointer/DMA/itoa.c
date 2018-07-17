#include<stdio.h>
#include<stdlib.h>
char * itoa(int);
 int main()
  {
    int num;
     printf("entre the number\n");
	scanf("%d",&num);
	printf("%s\n",itoa(num));
	
  }
 char * itoa(int num)
  {	
	char *ptr=(char *)malloc(10);
	int i=0;
	int temp=num;
	while(temp)
	{
	 temp/=10;
	  i++;
	}
	 while(num)
	  {
	    ptr[i-1]='0'+(num%10);
	    num/=10;
	     i--;
	  }
	return ptr;
  }
