#include<stdio.h>
 int main()
   {
	int i,big,small,ind,inds;
	int a[10]={3,7,16,344,37,24,35,8,9,27};
	for(i=0;i<10;i++)
	  printf("array element:%d\n",a[i]);
	 
	big=a[0];
	small=a[0];
	for(i=1;i<10;i++)
	  {
	    if(a[i]>big)
	      {
		big=a[i];
	       ind=i;
	      }
	   else if(a[i]<small)
	       {
		small=a[i];
		inds=i;
	       }
	  }
	 printf(" a[%d] big=%d\n",ind,big);
	printf("a[%d] small=%d\n",inds,small);
    }

	
	
