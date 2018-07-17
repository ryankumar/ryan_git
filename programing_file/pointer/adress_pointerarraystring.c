#include<stdio.h>
void swap(int ,int ) ;
int main()
  {
   char *ptr[]={"white","green","blue","black"};
     int i;
	for(i=0;i<4;i++)
	{	printf("value of ptr[%d]=%s\t",i,ptr[i]);
		printf("address of base string ptr=%u\n",ptr[i]);//string constant adress which is stored in constant section of data segment
      	printf("address of stored pointer:%u\n",&ptr[i]);//
	}
 }
