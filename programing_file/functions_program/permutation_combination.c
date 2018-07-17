#include<stdio.h>
int perm(int,int);
int comb(int,int);
int fact(int);
int main()
{

	int n,r;
	printf("enter n and r:");
	scanf("%d%d",&n,&r);
	printf("total nuber of permutation:%d",perm(n,r));
	printf("total number of combination:%d",comb(n,r));
	return 0;
}
  int perm(int n,int r)
    {
       int p= fact(n)/fact(n-r);
        return p;
    }
  int comb(int n,int r)
   {
	int c;
     	c=perm(n,r)/fact(r);
        return c;
   }
 int fact(int n)
   {
      int i,fact=1;
     if(n==0)
	return 1;
     for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
   }
