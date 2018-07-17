#include<stdio.h>
#include<stdlib.h>
int * sort(int *,int ,int *,int,int *);
int main()
 {
       int arr1[10];
        int arr2[8],i;
	int *arr3=0,size;
	       printf("enter the 1st arr:\n");
	    		for(i=0;i<10;i++)
	        	  scanf("%d",&arr1[i]);
	       printf("enter the 2nd arr:\n");
	    		for(i=0;i<8;i++)
	     		  scanf("%d",&arr2[i]);
	 	arr3=sort(arr2,8,arr1,10,&size);
	   		for(i=0;i<size;i++)
	             	   printf("%d ",arr3[i]);
  }

 int * sort(int *arr1,int m,int *arr2,int n,int *size)
   {
    	int i,j,k,temp;
	  
	    int * arr3=(int *)malloc((m+n)*sizeof(int));
	    int *arr4=0;
	   if(arr3)
	    {
		    for(i=0;i<m;i++)  
		       arr3[i]=arr1[i];
			   for(j=i,k=0;j<m+n;j++,k++)
	   			arr3[j]=arr2[k];

				   for(i=0;i<m+n;i++)
	    			    {
	      			       for(j=i+1;j<m+n;j++)
	        			{
		 			   if(arr3[i]>arr3[j])
		    			      { 
		     				  temp=arr3[i];
		     				   arr3[i]=arr3[j];
		     				   arr3[j]=temp;
		   			       } 
					    
	        			}
	    			     }
	 
		for(i=0,j=0;i<m+n;i++)
		 {
	  	    if(arr3[i]!=arr3[i+1])
			arr3[j++]=arr3[i];
		     
	         }
		  *size=j;
         	arr4=realloc(arr3,j*sizeof(int));
	  	return arr4;
      	    }
   	else
     	   printf("allocation not possible");
   }
		
		   
   
			    

