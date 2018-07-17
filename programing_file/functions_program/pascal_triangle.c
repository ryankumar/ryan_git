 #include<stdio.h>
 int comb(int,int);
 int fact(int);
 int main()
  {
    	int k,i,j;
     printf("enter the number of rows/columns:\n");
     scanf("%d",&k);
  	for(i=0;i<k;i++)
      	{
	  for(j=0;j<=i;j++)
	    printf("%d ",comb(i,j));
		printf("\n");
	}
  }
 int comb(int i,int j)
   {
    int  c;
    c=fact(i)/(fact(j)*fact(i-j));
    return c;
   }
 int fact(int n)
  {
   int fact=1;
	int i;
	if(n==0)
     	return 1;
       for(i=1;i<=n;i++)
	 fact=fact*i;
	  return fact;
  }
