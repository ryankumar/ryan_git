#include<stdio.h>
int isvalid(int,int,int);
int main()
{
int a,b,c,val;
printf("enter the dd/mm/yy:");
scanf("%d%d%d",&a,&b,&c);
 val=isvalid(a,b,c);
if(val==1)
printf("date is valid\n");
else if(val==0)
printf("not valid");
return 0;
}

int isvalid(int d,int m,int y)
 { 
   int leap=0,flag=1;
  if(y%4==0 && y%100!=0 || y%400==0)
   leap=1;
   if(m<1 || m>12)
    flag=0;
  else if(d<1 || d>31)
      flag=0;
  else if(m==2)
      {
	if(d>29 && leap==1)
	flag=0;
       else if(d>28)
	 flag=0;
       }
  else if(m==4 || m==6 || m==9 || m==11)
        {
	  if(d>30)
		flag=0;
	}
  
  return flag;
 }
