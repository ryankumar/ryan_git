# 1 "sort_array.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "sort_array.c"


int main()
 {
   int arr[10]={3,4,2,6,7,1,8,5,9,10};
 int temp,i,j;
     printf("enter array element is: ");
 for(i=0;i<10;i++)
  printf("%d ",arr[i]);
  for(i=0;i<10;i++)
          {
    for(j=i+1;j<10;j++)
      {if(arr[i]>arr[j]){temp=arr[i];arr[i]=arr[j];arr[j]=temp} }printf("%d ",arr[i]);
   }
 }
