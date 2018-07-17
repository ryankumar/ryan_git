#include<stdio.h>
int main()
{

int n;
printf("enter the number");
scanf("%d",&n);
switch(n%2)
{

case 0:printf("number is even:%d",n);
        break;
case 1:printf("number is odd:%d",n); 


}
return 0;

}
