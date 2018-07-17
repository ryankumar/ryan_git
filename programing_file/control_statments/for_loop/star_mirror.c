/*                  1
 		  2 3 2
		3 4 5 4 3
	      4 5 6 7 6 5 4
            5 6 7 8 9 8 7 6 5 
	      4 5 6 7 6 5 4
 	        3 4 5 4 3 
                  2 3 2
                    1
*/

#include<stdio.h>
int main()
{

int i,j,n=5,k;
for(i=1;i<=n;i++)
  {
    k=i;
    for(j=1;j<=n-i;j++)
         printf("\t");
	for(j=1 ;j<=i;j++)
	 printf("%d\t",k++);
	  
           k=k-1;
	    for(j=1 ; j<i;j++)
		printf("%d\t",--k);
         printf("\n");
   }
    
        for(i=1;i<n;i++)     
          { 
            k=k-1;        
            for(j=1;j<=i;j++)
		printf("\t");
		for(j=1;j<=n-i;j++)
		    printf("%d\t",k++);
		    
		     k=k-1;
     		     for(j=1;j<n-i;j++)
			 printf("%d\t",--k);	
         		printf("\n");
	 }
}          

