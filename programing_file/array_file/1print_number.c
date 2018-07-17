#include<stdio.h>
 int main()
   {
	
	int a[100];
	int i;
	
	for(i=0;i<100;i++)
	 {
	    a[i]=i+1;
	   printf("arr[%d]=%d\t",i,a[i]);
	 }
	  printf("\n");
       for(i=0;i<100;i++)
	{
	
	  if(a[i]%2)
	    printf("odd numbers:%d\t",a[i]);
	}
	  printf("\n");
	for(i=0;i<100;i++)
	 {
	
	   if(a[i]%2==0)
	   printf("even numbers:%d\t",a[i]);
	 }
	   printf("\n");
	for(i=0;i<100;i++)
	 {
		    printf("add 5:%d\t",a[i]+5);
	 }
	  printf("\n");
  }
	    
