//Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array. using indirection operator , print the value stored in each element of the array.
 
 #include<stdio.h>
  int main()
   {
      int arr[10]={1,2,3,4,5,6,7,8,9,10};
      
      int *ptr[10],i;
      for(i=0;i<10;i++)
        {
  	   ptr[i]=&arr[i];
           printf("ptr[%d]=%p\t *ptr[%d]=%d\n",i,ptr[i],i,*ptr[i]);
        }
  }    
