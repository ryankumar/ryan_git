#include<stdio.h>
#include"student_struct.c"
void readstructure(STUDENT *s);
void printstructure(STUDENT *s);
int main()
 {
   STUDENT s[5];
  
   readstructure(s);
  printstructure(s);
 }
   
