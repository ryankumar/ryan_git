#include<stdio.h>
int main()
{

char c,A,Z;
printf("enter the char");
scanf("%c",&c);
	
	c>='A' && c<='Z' ? printf("%c",c+32):printf("%c",c-32);

	return 0;
}
