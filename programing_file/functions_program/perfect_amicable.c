#include<stdio.h>
 int perfect(int);
 int main()
   {
	int i,p,c=0;
	 for(i=1;i<=9999;i++)
	    {
		p=perfect(i);
	      if(p==i)
		  printf("perfect number is:%d\n",i);
	   }
	return 0;
   }
 int perfect(int i)
   {
	int n,sum=0,sum1=0,p;
   	      for(n=1;n<=i/2;n++)
      		 {
	 	   if(i%n==0)
		       {
			  sum=sum+n;
		       }
	 	 }
     			 for(p=1;p<=sum/2;p++)
	  		   {
	    			if(sum%p==0)
	       			   {	
		 			sum1=sum1+p;
	       			   }
	  		  }	
                 			if(sum1==i && sum!=i )
	          			printf("amicable pair is: %d & %d\n",i,sum);
	   	  			return sum;
   }
	     
		
   
