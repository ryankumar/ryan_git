#include<stdio.h>
 int main()
   {
//	#define MAX 5
	int MAX,x,c=0;
	scanf("%d",&MAX);
	int arr[MAX];
	int i;
	for(i=0;i<MAX;i++)
	{
	printf("enter the numbers ");
	scanf("%d",&arr[i]);
	}
	  printf("search a number\n");
	  scanf("%d",&x);
	for(i=0;i<MAX;i++)
	{
	  if(arr[i]==x)
	       printf(" number and index is %d=arr[%d]\n",arr[i],i);
	}
//	if(c==1)
//      printf(" number and index is %d=arr[%d]\n",arr[i],i);
   }
