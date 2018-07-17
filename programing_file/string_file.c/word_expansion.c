#include<stdio.h>
 int main()
  {
    int n,rev=0,r,rem;
 printf("entre the number\n");
 scanf("%d",&n);
   while(n!=0)
    {
      r=n%10;
      rev=rev*10+r;
      n/=10;
    }
  while(rev!=0)
   {
     rem=rev%10;
     switch(rem)
      {
     	case 0:printf("zero ");break;
   	case 1:printf("one ");break;
    	case 2:printf("two ");break;
  	case 3:printf("three ");break;
	case 4:printf("four ");break;
 	case 5:printf("five ");break;
	case 6:printf("six ");break;
	case 7:printf("seven ");break;
	case 8:printf("eight ");break;
	case 9:printf("nine ");break;
      }
    rev/=10;
  }
printf("\n");
 }
