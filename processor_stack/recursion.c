#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char com[64];

void display(int x)
 {
   int arr[1234];
     printf("hiii");
   sprintf(com,"pmap %d",getpid());
   system(com);
    printf("%d",x--);
   display(x);
 
printf("%d\n",getpid());

 }

int main()
 {
   int x=10;
  display(x);
 }

   
