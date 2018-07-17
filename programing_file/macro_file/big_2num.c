//#include<stdio.h>
#define BIGGEST(a,b,c) c=a>b?a:b
 int main()
  {
    int a=10,b=20,c;
     printf("entred number is:%d %d\n",a,b);
	BIGGEST(a,b,c);
	printf("biggest number is:%d\n",c);
    char c1='A',c2='a',c3;
	printf("enterd char is: %c %c\n",c1,c2);
	BIGGEST(c1,c2,c3);
	printf("biggest char is:%c\n",c3);
    float f1=10.6,f2=9.8,f3;
	printf("entred number is:%f %f\n",f1,f2);
	BIGGEST(f1,f2,f3);
	printf("biggest number is:%f\n",f3);
   return 0;
  }	
