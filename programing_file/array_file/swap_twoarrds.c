#include<stdio.h>
  int main()
    {
	int i,j,temp,s1,s2;
	printf("enter the size for arr1:");
	scanf("%d",&s1);
	printf("\n enter the size for arr2:");
	scanf("%d",&s2);
	int a[s1];
	int b[s2];
		printf("enter the elements for arr1:");
	           for(i=0;i<s1;i++)
		      scanf("%d",&a[i]);
		printf("\n enter the elements for arr2:");
		   for(j=0;j<s2;j++)
	 		scanf("%d",&b[j]);
        	printf("\n");
			
		if(s1==s2)
	       	    for(i=0,j=s2-1;i<s1 && j>=0;i++,j--)	
	  	      {
	   		temp=a[i];
	   		a[i]=b[j];
	  		 b[j]=temp;
	  	      }
		else if(s1>s2)
	  	    {
//			for(i=0;i<s1-s2;i++)
//		 	  a[i]=0;
	  	    for(i=s1-s2,j=s2-1;i<s1 && j>=0;i++,j--)
            	       {   
	       		temp=a[i];
			a[i]=b[j];
			b[j]=temp;
	     	       }
		    }
		else if(s1<s2)
		   {
//			for(j=0;j<s2-s1;j++)
//			b[j]=0;
	  	    for(i=0,j=s2-1;i<s1 && j>=s2-s1;i++,j--)

	     	      {
			temp=a[i];
			a[i]=b[j];
			b[j]=temp;
	     	      }
		   }
	printf("after swapping of two array is a: ");
	 	for(i=0;i<s1;i++)
	  	printf("%d ",a[i]);
	 printf("\n after swapping of array b : ");
	  	for(i=0;i<s2;i++)
	   	printf("%d ",b[i]);
	 
    }
