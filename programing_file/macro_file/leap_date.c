#include<stdio.h>
#define ISLEAP(y) ((y%4==0 && y%100!=0)||y%400==0)
#define MONTH(m) (m<1 && m>12)
#define DATE(d)  (d<1 && d>31)
int main()
 {
    int d,m,y,leap=0,flag=0;
	printf("entre the dd-mm-yy: ");
	scanf("%d%d%d",&d,&m,&y);
	if(ISLEAP(y))
	   leap=1;
	if(MONTH(m))
	  flag=0;
	if(DATE(d))
	  flag=0;
	else if(m==2)
	 {
	   if(d>29 && leap==1)
		flag=0;
	   else if(d>28)
		flag=0;
	  }
	else if(m==4||m==6||m==9||m==11)
	   {
		if(d>30)
		  flag=0;
	   }
	else{
		if(d>31)
		 flag=0;
	    }
	if(flag==1)
	  printf("date is valid\n");
	else printf("date is not valid\n");
	if(leap==1)
	 printf("this is leap year\n");
	else printf("this is not a leap year\n");
 }
	
   
