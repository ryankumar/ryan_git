#include<stdio.h>
int isprime(int,int);
int main()
{
 unsigned int m,n,ret,i=2,temp;
 printf("enter the starting and ending number m and n\n");
scanf("%u%u",&m,&n);
while(m==1 || m==-1){
  printf("starting number cann't be 1 or -1, enter number again\n");
  scanf("%u%u",&m,&n);
  }
 
while(m>4294967295 || n>4294967295)
 {
   printf("number should be in the range of 0 to 4294967295");
   scanf("%u%u",&m,&n);
 }
if(m>n)
 {
   temp=m;
   m=n;
   n=temp;
 }
 while(m<=n){
 
  if(m==1 || m==-1){
    m++;
   }
  
  else{
   ret= isprime(m,i);
  if (ret!=0)
    printf("%u\t",m);
    m++;
   }
 
}
return 0;
}

int isprime(int m,int i)
 {
     
     if(m%i==0)
     return 0;
   else if(i>m/2)
    return 1;
    i++;
    isprime(m,i);
 }
 
    
