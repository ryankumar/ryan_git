/* Write a program to accept any number up to six digits and print that in words.
  For example- 1265 = one two six five */

#include<stdio.h>
#include<math.h>
int main()
{

int n,rem,rem1,rev=0;
printf("enter the number upto 6digit:");
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 n=n/10;
rev=rev*10+rem;
}
  while(rev!=0)
  {
    rem1=rev %10;
    rev=rev/10;
   switch(rem1)
    {
      case 0:printf("zero "); break;
      case 1:printf("one ");    break;
      case 2:printf("two ");      break;
      case 3:printf("three ");      break;
      case 4:printf("four ");         break;
      case 5:printf("five ");           break;
      case 6:printf("six ");              break;
      case 7:printf("seven ");		     break;
      case 8:printf("eight ");		       break;
      case 9: printf("nine ");		         break;
    }
 
  }
  
printf("\n");
}
