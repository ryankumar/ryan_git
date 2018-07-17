#include<stdio.h>
#include<math.h>
float circle(int);
float square(int);
float equitriangl(int);
int main()
{

   int a;
   char ch;
   printf("enter the character & number:\n");
   scanf("%c%d",&ch,&a);
    if(ch=='c')
        printf("%f\n",circle(a));
  else if(ch=='s')
	printf("%f\n",square(a));
  else if(ch=='t')
        printf("%f\n",equitriangl(a));
      return 0;
}

 float circle(int a)
      {
         return 3.14*a*a;
      }
 float square(int a)
     {
        return a*a;
     }
 float equitriangl(int a)
     {
	return sqrt(3*a*a/4);
     }
