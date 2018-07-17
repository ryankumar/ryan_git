#include<stdio.h>
 int main()
   {
     int a,b,c;
     char c1,c2,c3;
     float f1,f2,f3;
      double d1,d2,d3;
    int *pa=&a,*pb=&b,*pc=&c;
     char *pc1=&c1,*pc2=&c2,*pc3=&c3;
      float *pf1=&f1,*pf2=&f2,*pf3=&f3;
      double *pd1=&d1,*pd2=&d2,*pd3=&d3;
   printf(" pa=%p\t pa+2=%p\n pb=%p\t pb-2=%p\n pc=%p\t pc-pa=%p\n",pa,pa+2,pb,pb-2,pc,pc-pa);
    printf(" pc1=%p\t pc1+2=%p\n pc2=%p\t pc2-2=%p\n pc3=%p\t pc3-pc1=%p\n",pc1,pc1+2,pc2,pc2-2,pc3,pc3-pc1);
     printf(" pf1=%p\t pf1+2=%p\n pf2=%p\t pf2-2=%p\n pf3=%p\t pf3-pf1=%p\n",pf1,pf1+2,pf2,pf2-2,pf3,pf3-pf1);
      printf(" pd1=%p\t pd1+2=%p\n pd2=%p\t pd2-2=%p\n pd3=%p\t pd3-pd1=%p\n",pd1,pd1+2,pd2,pd2-2,pd3,pd3-pd1);
 }

