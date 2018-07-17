# 1 "big_2num.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "big_2num.c"


 int main()
  {
    int a=10,b=20,c;
     printf("entred number is:%d %d\n",a,b);
 c=a>b?a:b;
 printf("biggest number is:%d\n",c);
    char c1='A',c2='a',c3;
 printf("enterd char is: %c %c\n",c1,c2);
 c3=c1>c2?c1:c2;
 printf("biggest char is:%c\n",c3);
    float f1=10.6,f2=9.8,f3;
 printf("entred number is:%f %f\n",f1,f2);
 f3=f1>f2?f1:f2
 printf("biggest number is:%f\n",f3);
   return 0;
  }
