#include<stdio.h>
void mystrrev(char[]);
 int main()
   {
     char ch[100];
	printf("enter the string: ");
	scanf("%[^\n]s",ch);
	mystrrev(ch);
	return 0;
   }
 
   void mystrrev(char ch[])
     {
	int i,j,k,temp;
	for(i=0;ch[i]!='\0';i++)
	 {
	  }
	printf("reverse of string: ");
	   for(j=0,k=i-1;j<k;j++,k--)
	    {
	     temp=ch[j];
	    ch[j]=ch[k];
	    ch[k]=temp;
	    }
	   printf("%s\n",ch);
     }
