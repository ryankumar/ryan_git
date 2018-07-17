#include<stdio.h>

int main()
 {
int prime(int,int);
     int m,n,i=0,j;
     printf("enter the 1st and 2nd number: ");
      scanf("%d%d",&m,&n);
  
        for(j=m;j<=n;j++)
         {
             i=prime(j,n);
                 if(i==1)
                      printf("prime number:%d\n",j);
          }
       return 0;
  }
   
 int  prime(int x,int y)
      {
        int isprime(int); 
        int i;
        for( ; x<=y;x++)
	 { 
	     
	     i=isprime(x); 
		return i;
         }
     
      }
        
 int isprime(int z)
    {
       int a=2;int c=1;
              for(a=2;a<=z/2;a++)    
                 {
		    if(z%a==0)
		       c=0;
                    
                  }
                 if(c==1)
			return 1;
			return 0;
	    }
