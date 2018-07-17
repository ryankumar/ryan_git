#include<stdio.h>

int main()
{
void prime(int,int);
     int m,n;
     printf("enter the 1st and 2nd number: ");
      scanf("%d%d",&m,&n);
	printf("prime numbers between m & n are:");
        prime(m,n);
       return 0;
}
   
 void prime(int x,int y)
      {
        int isprime(int); 

        for( ; x<=y;x++)
 
	     
	     if(isprime(x))
                  printf("%d ",x);

       }
        
 int isprime(int z)
    {
       int a=2;int c=1;
              for(a=2;a<=z/2;a++)    
                 
		    if(z%a==0)         		
			return 0;
			return 1;
    }
