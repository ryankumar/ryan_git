#include<stdio.h>
 int main()
   {
	int i,j,temp;
	  int a[10];
	printf("enter the 10 numbers: ");
	for(i=0;i<10;i++)
	  {
		scanf("%d",&a[i]);
	  }
 
	for(i=0;i<10;i++)
	  for(j=0;j<10;j++)
	    {
		
		if(a[i]>a[j])
		 {
		  temp=a[i];
		   a[i]=a[j];
		   a[j]=temp;
		 }
       	    }
	printf("sorting of array is: ");
	for(i=0;i<10;i++)
	 printf("%d ",a[i]);
	 printf("\n");
	 	  
   }
