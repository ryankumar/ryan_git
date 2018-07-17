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
     	int palindrom(int);
	int rev=0,rem,x;
        x=n;
      while(n>0)
      	{
	 rem=n%10;
   	 rev=rev*10+rem;
 	 n=n/10;
 	}
           if(palindrom(rev))
	
	    printf("palindrom");
           return rev;
  	 
  }
 int palindrom(int x)
   {
	int pal=0,rem,z;
          z=x;
	while(x>0)
	{
	 rem=x%10;
	 pal=pal*10+rem;
	 x=x/10;
	}
   if(z==pal)
        return 1;
        return 0;
	
   }
	
        
	 
