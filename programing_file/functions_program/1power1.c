 #include<stdio.h>
 #include"1power3.c"
 #include"1power2.c"
  int main()
  {
     int b,p;
     printf("enter the base and power:");
     scanf("%d%d",&b,&p);
     printf(" b^p=%lf",power(b,p));
    return 0;
  }

 double power(int b,int p)
    {
      	 double pow=1.000000;
	int i;
     if(b<0 && p<0 || p<0)
 	{
	  for(i=-1;i>=p;i--)
	   pow=mul(pow,b);
           return 1/pow;
	}
          
	    else if(b>=0 && p>=0 || b<0)
	      {
	          for(i=1;i<=p;i++)
                      pow=mul(pow,b);
                      return pow;
	       }
     			
    }

