#include "student_typedef1.h"
int main()
 {
 void   sdetailsprint(student s);
 student s1={"rohan","johan",3,4,1998,"embedded system",6};
        s1.id=1;
  student  s2,s3;
        scanf("%s%s%d%d%d%s%d",s2.sname,s2.fname,&s2.dDOB,&s2.mDOB,&s2.yDOB,s2.CN,&s2.dur);
        s2.id=2;
        s3.id=3;
        s3=s1;
   sdetailsprint(s1);
   sdetailsprint(s2);
   sdetailsprint(s3);
 }

void sdetailsprint(student s)
  {
    printf("student-%d information:\n---------------------\n",s.id);
    printf("student name:%s\n",s.sname);
    printf("father name: %s\n",s.fname);
    printf("dd-mm-yy:%d-%d-%d\n",s.dDOB,s.mDOB,s.yDOB);
    printf("course name:%s\n course duration:%d\n\n",s.CN,s.dur);
  }

