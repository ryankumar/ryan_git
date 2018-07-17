#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char com[64];

void display()
 {
   int arr[12346];
     printf("hiii");
   sprintf(com,"pmap %d",getpid());
   system(com);

   display();
 }

int main()
 {
   int x;
  display();
 }

   
