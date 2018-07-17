#include<stdio.h>
 int main()
  {
   int i,j,temp;
    int arr[]={5,7,9,4,3,8,2,1};
    for(i=0;i<8;i++)
      for(j=i;j<8;j++)
        if(arr[i]>arr[j])
       	  {
   	   temp=arr[i];
           arr[i]=arr[j];
	    arr[j]=temp;
          }
  
     printf("ascending order of array is:\n");
     for(i=0;i<8;i++)
      printf("%d,",arr[i]);
       printf("\n");
  }
