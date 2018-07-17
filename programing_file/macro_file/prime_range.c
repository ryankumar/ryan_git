#include<stdio.h>
/*#define PRIME(m,n) for(i=m;i<=n;i++)\
		    { ISPRIME(i)\
			if(c==0) printf("%d\n",i);\
		    }*/
			
			
			
#define ISPRIME(i)  for(j=2;j<=i/2;j++)\
		    {if(i%j==0)\
		    { c++;break; } }
			
		    

int main()
 {
   int m,n,i,c,j;
 printf("entre the range numebr\n");
 scanf("%d%d",&m,&n);
 printf("prime numbers are:");
 for(i=m;i<=n;i++)
   {    c=0;
	ISPRIME(i)
	if(c==0)	
	printf("prime no:%d\n",i);
   }
 }
