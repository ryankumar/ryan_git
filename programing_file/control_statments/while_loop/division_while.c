//wap for divisoin of two numbers w/o using '/' symbol. ex: b/a=result.

#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter the divider and divident");
scanf("%d%d",&a,&b);
  if(a==0)
     printf("result is infinite\n");
	else if(b>=0 && a>0)
 	 {
		while(b>=a)  
		{

    		  b=b-a;
  		   c++;

		}
	 }
	
	else if(b<0 && a<0)
	{
		while(b<=a)
		{
		  b=b-a;
		  c++;
		   
 		}
	}
	
	else if(a<0 && b>=0)
	{
		while(b>=(-a))
		{
		
		  b=b+a;
		  c--;
		   
		}
	}
	
	else if(b<0 && a>0)
	{
		while(b<=(-a))
		{
		  b=b+a;
		   c--;
		}
	}
printf("%d\n",c);

}
