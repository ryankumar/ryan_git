#include<stdio.h>
int main()
{

int i;
float f1;
char c;
long int l;
unsigned u;
long double ld;
double d;
printf("size of float:%lu\n",sizeof(f1+3.5f));
printf("size of double:%lu\n",sizeof(d+3.5));

printf("size ofcharacter:%lu\n",sizeof(c+'a'));
printf("size of long:%lu\n",sizeof(l+i));
printf("size of unsigned:%lu\n",sizeof(u+i));
printf("size of long double:%lu\n",sizeof(ld+3.14L));
return 0;


}
