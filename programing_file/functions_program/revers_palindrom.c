#include<stdio.h>
int main()
 {
    int reverse(int);
      int n;
      printf("enter the number:");
      scanf("%d",&n);
   	printf("revers number:%d\n",reverse(n));
       return 0;
}
 int reverse(int n)
   {
     	
	int rev=0,rem,x;
 	x=n;
      while(n>0)
      	{
	 rem=n%10;
   	 rev=rev*10+rem;
 	 n=n/10;  
	} 
      if(x==rev)
	printf("number is palindrom\n");
      else printf("number is not palindrom\n");
	return rev;
  }
          
