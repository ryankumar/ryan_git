#include<stdio.h>
typedef struct dt
 {
   int d;
   int m;
   int y;
 }DATE;
 DATE dob,dom;
 typedef struct stu
  {
        int id;
    char name[30];
    char gname[40];
    DATE dob;
    DATE dom;
    int ldur;
  }STUDENT;

#include"clbyref.c"
void readstudent(STUDENT *);
void printstudent(STUDENT *);
int main()
 {
   STUDENT s1={1,"ryaan","roje",{9,3,1993},{7,12,2023},8};
   STUDENT s2;
  s2.id=2;
   printf("read the details of student\n");
     readstudent(&s2);
     printstudent(&s1);
     printstudent(&s2);
 }
   
