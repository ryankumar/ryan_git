//1+1/4+1/9+1/16+....

#include<stdio.h>
 void sumseries(int);
   int main()
     {
	int n;
	printf("no. of terms: ");
	scanf("%d",&n);
	 sumseries(n);
     	return 0;
      }
  void sumseries(int n)
     {
	float sum=0,ser;
 	int i;
	for(i=1;i<=n;i++)
	   {
		
		sum=sum+(float)1/(i*i);
		printf("series:%f\n",sum);
	    }
	printf("sum of series is :%f\n",sum);
     }
