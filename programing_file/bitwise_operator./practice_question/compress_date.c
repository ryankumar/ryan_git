#include<stdio.h>
#include"print_bin.c"
int todate(int,int,int);
void print(short int);
void extract_date(short int );
int main()
 {
    int d,m,y;
    short int a;
 printf("enter the date,month ,year within 2000 t0 2099\n");
 scanf("%d%d%d",&d,&m,&y);
  y=y-2000;
  a=todate(d,m,y);
  extract_date(a);


 }

int todate(int d,int m,int y)
 {
   short int a=0;
   a=a|(m<<12);
   a=a|(d<<7);
   a=a|(y<<0);
   print(a);
  return a;
 }
 
void print(short int a) 
 {
    int n=15;
    while(n>=0)
     {
	if(a & (0x01<<n) )
	   printf("1");
	else printf("0");
        n--;
     if(n==11 || n==6)
	printf(" ");
     }
  printf("\n");
 }
	 
    
void extract_date(short int a)
 {
   short int d,m,y;
    m=(a>>12) & 0xf;     // to get month shift right to 12times and clear the bits after 4 bit;
    y=a & (0x7f);       //clear the bits after 6th bit;
    d=(a>>7) & (0x1f);   //shift right to 7times and clear the previous month bits;
  printf("m=%hd\n d=%hd\n y=%hd\n",m,d,y+2000);
  
 }
 
