#include<stdio.h>
float conversion(int,char);
int main()
{
int x;
float res;
char ch;
printf("enter the number and character:");
scanf("%d\n%c",&x,&ch);
res=conversion(x,ch);
if(ch=='c')
printf("inches:%f\n",res);
else if(ch=='i')
printf("centimeter:%f\n",res);
} 

 float conversion(int n,char ch)
 {
   float in,cm;
  
   if(ch=='c')
   {
    in=n*2.5;
    return in;
   }
 
 else if(ch=='i')
  {
    cm=n/2.5;
    return cm;
  }
 }
