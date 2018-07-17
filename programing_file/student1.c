#include "student.h"
void printstudentinfo(STUDENT);
int main()
{
STUDENT s1 = {1,"Hari","Rao",1,1,2000,"PG Diploma",6};
STUDENT s2;
s2.ID = 2;
scanf("%s%s%d%d%d%s%d",s2.sname,s2.fname,&s2.dDOB,&s2.mDOB,&s2.yDOB,s2.course,&s2.duration);
STUDENT s3;
s3 = s2;
s3.ID = 3;
//printf("%d",s2==s3);
printstudentinfo(s3);
printstudentinfo(s1);
printstudentinfo(s2);
printstudentinfo(s2);
}
void printstudentinfo(STUDENT s)
{
printf("Student#%d Information\n",s.ID);
printf("Student Name:%s\n",s.sname);
printf("Father Name:%s\n",s.fname);
printf("Date of birth:%d-%d-%d\n",s.dDOB,s.mDOB,s.yDOB);
printf("Course name:%s\n",s.course);
printf("Duration:%d months\n",s.duration);
printf("-------------------------------\n");
s.ID = 10;
}
