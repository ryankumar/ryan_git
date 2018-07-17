#include<stdio.h>
 int main()
  {
        int s[3][4];
	int i,j;
	int sum[4]={0},sum1[4]={0},tsum=0;

	printf("enter the 4itmes for 3sales person: ");
	for(i=0;i<3;i++)
	  for(j=0;j<4;j++)
	     scanf("%d",&s[i][j]);

	 printf("\n matrix is:\n");
	   for(i=0;i<3;i++)
	    {
	     for(j=0;j<4;j++)
	      printf("%d  ",s[i][j]);
	        printf("\n");
	    }

	printf("saling of items of each salesperson:\n");
	 for(i=0;i<3;i++)
	   {
	    for(j=0;j<4;j++)
	      sum[i]=sum[i]+s[i][j];
                printf("s[%d]=%d\n",i,sum[i]);
           }
          	printf("\n");

	printf("total selling of each items:\n");
       	  for(j=0;j<4;j++)
	        {
		    for(i=0;i<3;i++)
		      sum1[j]=sum1[j]+s[i][j];
	                 printf("item[%d]=%d\n",j,sum1[j]);
	       }
	          printf("\n");

	   for(i=0;i<4;i++)
	       tsum=tsum+sum[i]+sum1[i];
	 
	printf("total selling of all items by 3 sellsperson:%d\n ",tsum);
    }
   
