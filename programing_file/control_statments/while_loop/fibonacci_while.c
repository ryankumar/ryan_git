#include<stdio.h>
int main()
{
int n,i=1;
long int x,y,z;
printf("enter the number of terms");
scanf("\n%d",&n);
y=1;
x=0;

printf("%ld\t",y);
while(i<=n)
{
z=x+y;
x=y;
y=z;
i++;
printf("%ld\t",z);

}
printf("\n");
}
