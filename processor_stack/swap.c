#include<stdio.h>
void swap(int,int);
int main()
 {
   int a=3,b=5;
   swap(a,b);
  printf("%d %d\n",a,b);
 }
 
void swap(int p,int q)
 {
    int t=p;
	p=q;
	q=t;
   printf("p=%d\t q=%d\n",p,q);
 }
