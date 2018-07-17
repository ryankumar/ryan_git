//Take 10 numbers by user and add them if -ve number is entered then replece it to +ve number. ex: 1 2 3 -3 4  5 -6 7 6 -2 8 9 2 o/p:1+2+3+4+5+6+7+8+9+2=47'
#include<stdio.h>
int main()
{
int a,i=1,sum=0;
while(i<=10)
{
scanf("%d",&a);
  /*	if(a<0)
	printf("enter a +ve number\n");
	else
	{	
	sum=sum+a;
	i++;
	}  */

   while(a<0)
	{
	scanf("%d",&a);
	}
    sum=sum+a;
	i++;
}	
	printf("%d\n",sum);
return 0;
}
