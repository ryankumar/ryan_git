#include<stdio.h>
int main()
{
  int n,i=0,j,a,small,gcd=0;
  int flag=1;
   printf("how many number\n");
   scanf("%u",&n);
   int arr[n];
  while(i<n)
   {
      printf("enter the numbers\n");
      scanf("%d",&arr[i]);
     i++;
   }
   small=arr[0];
	 for(i=0;i<n;i++){
 	 if(arr[i]<=small)
  	   small=arr[i];
 	 }
   printf("small :%d\n",small);
// if any number is -ve     
    if(small<0){
      small=-small;
       }
 
    else if(small==1){
     printf("gretest common factor is %u\n",small);
      return 0;
     }
     
       for(i=2;i<=small;i++){
   	   for(j=0;j<n;j++)
    	   {
      	     if(arr[j]%i){
       	      flag=0;
              break;
              }
      		 j++;
    	   }
  	if(flag!=0)
   	gcd=i;
        i++;
       }
    if(gcd!=0)
    printf("gretest common factor is %u\n",gcd);
    else
    printf("there is no gcd\n");
 }
   
         
 
   
