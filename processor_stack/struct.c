#include<stdio.h>
int isvaliddate(int *,int *,int *,int *);
void adddate(DATE *date,int n)
 {
    int leap=0,i;
   if((date->y%4==0 && date->y%100) || date->y%400==0)
    leap=1;
   if(date->m==2)
     { 
	if(n>(29-date->d) && leap==1)
	  {
             date->d=date->d + n - 29;
		date->m=date->m + 1;
          }
 	else if(n>(28-date->d) && leap!=1)
         {
           date->d=date->d + n - 28;
           date->m=date->m + 1;
         }

	else date->d=date->d + n;
     }
   
  else if(date->m==4 || date->m==6 || date->m==9 || date->m==11)
     {
         if(n>(30-date->d))
	  {
	    date->d=date->d + n - 30;
	     date->m=date->m + 1;
   	  }
	else date->d=date->d + n;
     }
  
  else 
    {
   	if(n>(31-date->d) && date->m==12)
	  {
	    
	    date->d= date->d + n - 31;
	    date->m=1;
	    date->y= date->y + 1;
          }  
	else if(n>(31-date->d) && date->m!=12)
	  {
	     date->d= date->d + n - 31; 
              date->m= date-> m + 1;
	  }
	else date->d= date->d + n;
    }
  
	i=isvaliddate(&date->d,&date->m,&date->y,&n);
	if(i==0)
           {
		adddate(date,n);
	   }
 
 }
