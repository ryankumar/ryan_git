#include<stdio.h>
int main()
{
int yr;
printf("enter the year");
scanf("%d",&yr);

if(yr % 4 ==0 && yr % 100)
printf("this is a leap year\n");
    

else if(yr % 400==0)
        
        printf("leap yera");
else  
printf("not a leap year");
return 0;
}                                                              
								/*it can be write in this way also:
									
								if(yr % 4 ==0)
								{
									if(yr%100)
								        	printf("leap year");   
	
       									else
          							           if(yr%400==0)
              
	       									 printf(" leap year");
             								    else
										printf("not a leap year");
								}
								
								else 
								    printf("not leap year");*/

