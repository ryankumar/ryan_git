double mul(float pow,float b)
    {
        int i,sum=0;
    	if(pow<0 && b<0 || b<0)
	   {
	     for(i=b;i<0;i++)
		sum=sum-pow;
		return sum;
	    }
	 else
	    {
              for(i=1;i<=b;i++)
                  sum=sum+pow;
                   return sum;
             }
      }
 
