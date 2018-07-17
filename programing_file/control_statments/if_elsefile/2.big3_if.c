#include<stdio.h>
int main()
{

int a,b,c;
printf("enter the 3numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
       {
         
	if(a>c)	
	printf("bigger one is:%d",a);
	else
	printf("bigger one is:%d",c);
	
	}
else   if(b>c)
	printf("bigger is b:%d",b);
      else printf("bigger is c:%d",c);
return 0;

	



}
