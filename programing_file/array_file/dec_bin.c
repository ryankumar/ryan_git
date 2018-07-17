#include<stdio.h>
  int main()
   {
	int dec,i,c;
	int bin[100];
	printf("enter the decimal number: ");
	scanf("%d",&dec);
	for(i=0;dec>0;i++)
	 {
	   bin[i]=dec%2;
	   dec/=2;
	}
	printf("\n");
	printf("binary number is:");
	for(c=i-1;c>=0;c--)
	  printf("%d",bin[c]);
	printf("\n");
   }
	  
