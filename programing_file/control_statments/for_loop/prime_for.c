#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,flag=1;
printf("enter the number");
scanf("\n%d",&n);
   for(i=2;i<=n/2;i++ )  //for(i=2;i<=sqrt(n);i++)
   {
     if(n%i==0)
      {
        printf("number is not a prime:%d\n",n);
          flag=0;
          break;
      }
         
   }
 if(flag==1)
 printf("number is prime\n");

}
