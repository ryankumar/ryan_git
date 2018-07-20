// travers an array like a tree

#include<stdio.h>
void traverse_arr(int *,int,int);
int main()
{
  int arr[]={1,2,3,4,5,6,7,8};
  int size=sizeof(arr)/sizeof(arr[0]);
 printf("%d\n",size); 
  traverse_arr(arr,0,size-1);
 
}

void traverse_arr(int *arr,int l,int r)
{
  	if(l<=r){
	int m=l+(r-l)/2;
         
   	printf("%d\t",arr[m]);
        
        traverse_arr(arr,l,m-1);
        //  printf("after 1st fun m=%d\n",m);

        traverse_arr(arr,m+1,r);
       //  printf("after 2nd fun m=%d\n",m);
       }
    
}    
