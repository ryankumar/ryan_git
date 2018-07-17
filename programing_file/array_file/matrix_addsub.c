#include<stdio.h>
 int main()
   {
     int arr1[3][2];
     int arr2[3][2];
	int i,j;
	printf("enter the element for arr1:\n");
       	     for(i=0;i<3;i++)
       	         for(j=0;j<2;j++)
		    scanf("%d",&arr1[i][j]);
	 printf("enter the elements for arr2\n") ;
	     for(i=0;i<3;i++)
                 for(j=0;j<2;j++)
                     scanf("%d",&arr2[i][j]);
	 printf("entered element for arr1:\n");
             for(i=0;i<3;i++)
               {
	         for(j=0;j<2;j++)
	           printf("%d ",arr1[i][j]);
	              printf("\n");
               }
	
	 printf("entered element for arr2:\n");
             for(i=0;i<3;i++)
              {
                for(j=0;j<2;j++)
                   printf("%d ",arr2[i][j]);
                      printf("\n");

              }
	printf("sum of two array is\n");
	    for(i=0;i<3;i++)
	      {
		for(j=0;j<2;j++)
     	       	   printf("%d  ",arr1[i][j]+arr2[i][j]);
		       printf("\n");
   	     }
	printf("\n substraction of two array is\n");
	    for(i=0;i<3;i++)
            {
                for(j=0;j<2;j++)
                   printf("%d  ",arr1[i][j]-arr2[i][j]);
                     printf("\n");
	    }
	   
    }
