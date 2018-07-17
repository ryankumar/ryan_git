// try binutils : nm,strip,readelf,objdump
#include<stdio.h>
int add(int,int);
int sub(int,int);
int x=10;  // global symbol variable
static int y=20; // local symbol variable
int main()
{
  int z=10; // local variable but not symbol
   printf("add fun:%d\n",add(10,2));
   printf("sub fun:%d\n",sub(5,3));
 return 0;
 }
   
