#include<stdio.h>
#include"print_bin.c"
void search_pattern(int,int);
int check_pattern(int,int);
int main()
 {
   int n,p;
  printf("enter any number\n");
  scanf("%d",&n);
  printf("enter the pattern number\n");
  scanf("%d",&p);
   print_bin(n);
   print_bin(p);
  search_pattern(n,p);
  
 }
 
void search_pattern(int n,int p)
 {
   
   int x=0,c=0;
   while(n)
    {
      
	if((n & 0x01) == (p & 0x01))
          {
	     if( check_pattern(n,p))
	         c++;
	  }
       n=n>>1;
    }
  printf("no. of pattern is %d\n",c);
 
 }
 
int check_pattern(int n,int p)
  {
    while(p)
     {
       
       if((p & 0x01)!= (n & 0x01))
	  return 0;
	n=n>>1;
	p=p>>1;
     }
   return 1;
  }
       
