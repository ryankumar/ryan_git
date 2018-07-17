#include<stdio.h>
int main()
{

int i;
short int s;
char c;
float f1;
double d;
long int l;
unsigned int u;
unsigned long long int lu;
long double ld;
printf("size of char :%lu\t%lu\t%lu\n ",sizeof(c),sizeof('D'),sizeof(char));
printf("size of short:%lu\t%lu\t%lu\n ",sizeof(s),sizeof(32456),sizeof(short int));
printf("size of float:%lu\t%lu\t%lu\n ",sizeof(f1),sizeof(3.143f),sizeof(float));
printf("size of int:%lu\t%lu\t%lu\n ",sizeof(i),sizeof(34532),sizeof(int));
printf("size of long int:%lu\t%lu\t%lu\n ",sizeof(l),sizeof(56453643),sizeof(long int));
printf("unsigned long long int:%lu\t%lu\t%lu\n ",sizeof(lu),sizeof(533663635),sizeof(unsigned long long int));
printf("size of double:%lu\t%lu\t%lu\n ",sizeof(d),sizeof(534.534364),sizeof(double));
printf("size of long double:%lu\t%lu\t%lu\n ",sizeof(ld),sizeof(3534.4352636),sizeof(long double));

return 0;



}
