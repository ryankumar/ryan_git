// enter the 100 persons age and count the no. of persons those are between 50 to 60 years .

#include<stdio.h>
int main()
{
  int n=100,a,c=0;
  printf("enter the ages:");
  for(n=1;n<=100;n++)
    {
     scanf("\n%d",&a);
   if(a>=50 && a<=60)
     c++;
    }  
    printf(" no.of persons:%d\n",c);
           

}
