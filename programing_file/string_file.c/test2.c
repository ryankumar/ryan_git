#include<stdio.h>
 int main()
  {
	char a[10];
	char b[10];
	char c[10];
	char d[10];
        printf("enter the name:\n");
	 scanf("%s",a);
	   printf("name:%s\n",a);

	 	    printf("entre the name for limit length:\n");
		scanf("\n%9s",b);
	    printf("enterd name:%s\n ",b);

	printf("enter the name with space:\n");
	scanf(" %[^\n]s",c);
	printf("entered name with space:%s\n",c); 


	  printf("entre the name with space and lenth limit:\n");
	  scanf(" %9[^\n]s",d);
	 printf("name with space and length :%s\n",d);
   }
