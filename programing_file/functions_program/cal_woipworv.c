#include<stdio.h>
 void add(void);
 void sub(void);
 void mul(void);
 void div(void);
 int main()
{
   float z;
   char ch;
   printf("enter the character and number:");
  scanf("%c",&ch);
             if(ch=='+')
  		   add();
		else
		 if(ch=='-')
    			sub();
                        else
			 if(ch=='*')
  			       mul();
  			       else
 				if(ch=='/')
 				       div();
  				
               return 0;
  }

 void add(void)
      {
         float a,b,c;
             scanf("%f%f",&a,&b);
               printf("%f\n",a+b);
  }
 void sub(void)
   {
	float a,b,c;
      scanf("%f%f",&a,&b);
	printf("%f\n",a-b);
   }
 void mul(void)
  {
	
	float a,b,c;
       scanf("%f%f",&a,&b);
	printf("%f\n",a*b);
   }	
 void div(void)
   {
	
	float a,b,c;
        scanf("%f%f",&a,&b);
         printf("%f\n",a/b);
   }

