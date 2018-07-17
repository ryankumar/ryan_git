#include<stdio.h>
int main()
{
int a,b,rem;
printf("enter the divider and divident\n");
scanf("%d%d",&a,&b);
	if(a==0)
	  printf("'a' can't be zero\n");
		
	    else if(a<0 && b<0)
  	     {
     		while(b<=a)
      		{
        	   b=b-a;
      		}
		  printf("%d\n",b);
  	    }
	       
		else if(a>0 && b>=0)
		{  
  		   while(b>=a)
  		    { 
    			b=b-a;
    		    }
  		       printf("%d\n",b);
                } 
			
		   else if(a<0 || b<0)
   		    {
   			while(b!=0)
     			{
       			    b=a+b;
       			 if(b<=1)
          		    break;
     			}
    			  printf("%d\n",b);
    		    }
	return 0;

}
