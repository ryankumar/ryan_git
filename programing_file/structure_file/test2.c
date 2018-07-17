#include<stdio.h>
 int isvaliddate(int *d,int *m,int *y,int *n)
  {
	int flag=1,leap=0;
    if(((*y)%4==0 && (*y)%100) || (*y)%400==0)
     leap=1;
     if(*m==2)
      {
	if(*d>29 && leap==1)
	 { *n=*d-29;
	    *d=29;
	   flag=0;}
	else if(*d>28 && leap!=1)
	  { *n=*d-28; 
	     *d=28;
	      flag=0;}
      }
   else if(*m==4|| *m==6||*m==9||*m==11)
     {
	if(*d>30)
	{
	 *n=*d-30;
	  *d=30;
	flag=0;}
     }
   else
    {
	if(*d>31)
	{ *n=*d-31;
	   *d=31;
	 flag=0;}
    }
 return flag;
 }
