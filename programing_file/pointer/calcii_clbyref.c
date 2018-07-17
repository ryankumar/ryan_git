#include<stdio.h>
 void calcii(int ,int,int *,int *,int *,int *,int*);
 int main()
  {
    int x=20,y=6,a,s,m,d,r;
    
     calcii(x,y,&a,&s,&m,&d,&r);
     printf("add=%d\t sub=%d\t mul=%d\t div=%d\t mod=%d\n",a,s,m,d,r);
  }
 void calcii(int x,int y,int *pa,int *ps,int *pm,int *pd,int *pr )
   {
     *pa=x+y;
      *ps=x-y;
      *pm=x*y;
     *pd=x/y;
     *pr=x%y;
   }
