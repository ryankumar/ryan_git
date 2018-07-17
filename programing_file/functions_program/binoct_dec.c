#include<stdio.h>
int binary(int);
int octal(int);
int main()
{
 int n;
char ch;
printf("entre the character and number:");
scanf("\n%c%d",&ch,&n);
if(ch=='b')
  printf("binary to decimal:%d\n",binary(n));
if(ch=='o')
  printf("octal to decimal:%d\n",octal(n));
 
 }

  int binary(int n)
   {
     int i=1,dec=0,rem;
	while(n>0)
	{
	  rem=n%10;
	   dec=dec+i*rem;
	  i=i*2;
	  n/=10;
        }
      return dec;
   }
 int octal(int n)
   {
    int rem,dec=0,i=1;
   
      	while(n>0)
	{
	 rem=n%10;
	 dec=dec+i*rem;
	 i=i*8;
	 n/=10;
        }
     return dec;
   }
	 
/*
  int fun(int,int);
  int main()
  {
     int n,base;
	char ch;
	scanf("%c%d",&ch,&n);
	base=ch=='b'?2:8;
     printf("decimal number is:",fun(n,base));
     
  }
   int fun(int n,int base)
    {
       int dec=0,rem,i=1;
	while(n>0)
 	{
	  rem=n%10;
	  dec=dec+i*rem;
	  n/=10;
	 i*=base;
	}
    return dec;
    }
