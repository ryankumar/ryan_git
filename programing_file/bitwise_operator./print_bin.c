#include<stdio.h>
 void print_bin(int);
    int main()
    {
      int x;
    printf("enter the number\n");
    scanf("%d",&x);
    print_bin(x);
    }
   void print_bin(int a)
   {
    /* long int mask=0x80000000;
     while(mask)
      {
        if(a & mask)
	printf("1");
	else
	printf("0");
 	mask=mask>>1;
      }*/
    	

	int i,mask;
	for(i=31;i>=0;i--)
	 {
	    mask=1<<i;
	    (a & mask)?printf("1"):printf("0");
	    if(i%8==0)
	    printf(" ");
	 }

   }
