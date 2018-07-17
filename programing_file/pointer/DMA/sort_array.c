#include<stdio.h>
#include<stdlib.h>
 void sort(int *);
 int main()
  {
    int *ptr,i;
    ptr=(int *)malloc(10*sizeof(int));
    printf("entre the 10 elements\n");
   for(i=0;i<10;i++)
	scanf("%d",&ptr[i]);
   sort(ptr);
   for(i=0;i<10;i++)
    printf("%d ",ptr[i]);
   free(ptr);
  }
 void sort(int *ptr)
  {
	int i,j,temp;
    for(i=0;i<10;i++)  
      for(j=i;j<10;j++)
        {
	  if(ptr[i]>ptr[j])
	     {
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	     }
 	}
  }
