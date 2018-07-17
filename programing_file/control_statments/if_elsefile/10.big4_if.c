#include<stdio.h>
int main()
{

int a,b,c,d;
printf("enter the 4 numbers");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b)
     {
    if(a>c)
	{
	if(a>d)
	printf("bigger is:%d",a);
	else
	printf("bigger is :%d",d);
	}
    else
        if(c>d) 
      printf("bigger is:%d",c);

   
    }
else
   if(b>c)
       {
         if(b>d)
      
   printf("bigger is:%d",b);

  else
      printf("bigger is :%d",d);
      }
    else
        if(c>d)

printf("bigger is :%d",c);
    else 
printf("bigger is %d",d);

return 0;



}
