//#include<stdio.h>
#define SORT(a,b,t) {if(a>b){t=a;a=b;b=t;}
int main()
 {
   int arr[10]={3,4,2,6,7,1,8,5,9,10};
	int temp,i,j;
     printf("enter array element is: ");
	for(i=0;i<10;i++)
	 printf("%d ",arr[i]);
	  printf("\n");
	 for(i=0;i<10;i++)
          {
	   for(j=i+1;j<10;j++)
	     SORT(arr[i],arr[j],temp)
	     printf
	  }
 }
	
