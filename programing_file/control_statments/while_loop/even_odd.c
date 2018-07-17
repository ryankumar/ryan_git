//wap for finding even n odd numbers from the given range.

#include<stdio.h>
int main()
{

int m,n;
printf("enter the starting and ending  number");
scanf("%d %d",&m,&n);
while(m<=n)
{
/*if(m%2==0)                             
printf("even numbers are:%d\n",m);       
else 
printf("odd numbers are:%d\t",m);*/

while(m%2==0)
{
printf("even numbers are:%d\n",m);
break;
}
    while(m%2)
       {
	printf("odd numbers are:%d\t",m);
	break;
	}
m++;	

}

return 0;

}

