#include<stdio.h>
#include"student.h"
int main()
{
STUDENT s = {1,"Name","FName",{1,2},3,4,2018,"CN",6};
printstudentinfo(s);
STUDENT s1;
s1.ID = 2;
readstudentinfo(&s1);
printstudentinfo(s1);
}
void readstudentinfo(STUDENT *s)
{
printf("Please enter name,fname,dob,doj,course name and duration\n");
scanf("%s%s",s->sname,s->fname);
scanf("%d-%d-%d",&s->DOB.day,&s->DOB.month,&s->DOB.year);
scanf("%d-%d-%d",&s->DOJ.day,&s->DOJ.month,&s->DOJ.year);
scanf("%s%d",s->course,&s->duration);
}
void printstudentinfo(STUDENT s)
{
printf("Student#%d Information\n",s.ID);
printf("Student Name:%s\n",s.sname);
printf("Father Name:%s\n",s.fname);
printf("Date of birth:%d-%d-%d\n",s.DOB.day,s.DOB.month,s.DOB.year);
printf("Date of Joining:%d-%d-%d\n",s.DOJ.day,s.DOJ.month,s.DOJ.year);
printf("Course name:%s\n",s.course);
printf("Duration:%d months\n",s.duration);
printf("-------------------------------\n");
s.ID = 10;
}

