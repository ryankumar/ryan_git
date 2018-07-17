#include<stdio.h>
 float add(void);
 float sub(void);
 float mul(void);
 float div(void);
 int main()
{
   float z;
   char ch;
   printf("enter the character and number:");
  scanf("%c",&ch);
             if(ch=='+')
 		{
  		   z=add();
       		  //  printf("%f\n",z);
 		}
		else
		 if(ch=='-')
 		    {
   			z=sub();
      		//	printf("%f\n",z);
 		     }
		      else
			 if(ch=='*')
  			   {
   			     z=mul();
  			    // printf("%f\n",z);
 			    }
			     else
 				if(ch=='/')
 				  {
   				     z=div();
  				//	printf("%f\n",dv);
 				   }
            printf("%f\n",z);
               return 0;
  }

 float add(void)
      {
         float a,b,c;
             scanf("%f%f",&a,&b);
               c=a+b;
                return c;
  }
 float sub(void)
   {
	float a,b,c;
      scanf("%f%f",&a,&b);
	c=a-b;
       	return c;
   }
 float mul(void)
  {
	
	float a,b,c;
       scanf("%f%f",&a,&b);
	c=a*b;
	return c;
  }
 float div(void)
   {
	
	float a,b,c;
        scanf("%f%f",&a,&b);
            c=a/b;
	return c;
   }

