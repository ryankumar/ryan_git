#include<stdio.h>
int date(int,int,int,int,int,int);
int main()
 {
   int d1,m1,y1,d2,m2,y2,c;
  printf("netre the dates ");

  scanf("%d%d%d",&d1,&m1,&y1);
  scanf("%d%d%d",&d2,&m2,&y2);
  
    c=date(d1,m1,y1,d2,m2,y2);
   if(c==1)
      printf("date is older:%d.%d.%d",d1,m1,y1);
   if(c==-1)
    printf("date is older:%d.%d.%d",d2,m2,y2);
   if(c==0)
   printf("dates are equal\n");
      return 0;
 }
 int date(int d1,int m1,int y1,int d2,int m2,int y2)
   {
        if(y1<y2 || m1<m2 || d1<d2)
           return 1;
       else  if(y2<y1 || m2<m1 || d2<d1)
          return -1;
        else
      return 0;
}


