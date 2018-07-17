#include<stdio.h>
 int main()
   {
	int k,l,m,n,i,j,p;
    printf("enter the row n column for arr1 n arr2:\n ");
	scanf("%d%d%d%d",&k,&l,&m,&n);
        if(l!=m)
	printf("column of arr1 & row of arr2 should be equal\n");
	else{
               int arr1[k][l];
                int arr2[m][n];
		int sum[k][n];
	printf("enter the element for arr1:\n");
	 for(i=0;i<k;i++)
	   for(j=0;j<l;j++)
	    scanf("%d",&arr1[i][j]);
	 printf("enter the elements for arr2\n") ;
	   for(i=0;i<m;i++)
           for(j=0;j<n;j++)
            scanf("%d",&arr2[i][j]);
	 printf("entered element for arr1:\n");
         for(i=0;i<k;i++)
           {
	      for(j=0;j<l;j++)
	      printf("%d ",arr1[i][j]);
	       printf("\n");
           }
	
	 printf("entered element for arr2:\n");
         for(i=0;i<m;i++)
           {
              for(j=0;j<n;j++)
              printf("%d ",arr2[i][j]);
               printf("\n");

           }
	printf("multiplication of two array is\n");
	   for(i=0;i<k;i++)
	    {
		for(j=0;j<n;j++)
		 {
		    sum[i][j]=0;
		   for(p=0;p<l;p++)
		      sum[i][j]=sum[i][j]+(arr1[i][p]*arr2[p][j]);
     	 	      printf("%d  ",sum[i][j]);
	        }
	      printf("\n");
     	   }
	
          printf("\n");
	
     }	   
    }
