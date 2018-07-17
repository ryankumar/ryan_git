// declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?
  
 #include<stdio.h>
  int main()
   {
     int x=10;
      float y=10.123;
       char ch='a';
   int *ptrx=&x;
     float *ptry=&y;
       char *ptrch=&ch;
   printf("size of x=%lu\t *ptrx=%lu\t  ptrx=%lu\n",sizeof(x),sizeof(*ptrx),sizeof(ptrx));
      printf("size of y=%lu\t *ptry=%lu\t ptry=%lu\n",sizeof(y),sizeof(*ptry),sizeof(ptry));
     printf("size of ch=%lu\t *ptrch=%lu\t ptrch=%lu\n",sizeof(ch),sizeof(*ptrch),sizeof(ptrch));
  }
