#include<stdio.h>
#include"student.h"
#include <string.h>
#define SIZE 10
void printstudentinfo(STUDENT *s);
int main()
{
STUDENT arrstu[SIZE] = {{1,"name1","fname1"},{2,"name2","fname2"},{3,"name3","fname3"}};
int i;
for(i=0;i<SIZE;i++)
{
printf("DOB of Student#%d %s:\n",arrstu[i].ID,arrstu[i].sname);
//scanf("%d-%d-%d",&arrstu[i].DOB.day,&arrstu[i].DOB.month,&arrstu[i].DOB.year);
arrstu[i].DOB.day = i+1;
arrstu[i].DOB.month = i+1;
arrstu[i].DOB.year = 2000+i;
arrstu[i].DOJ = arrstu[i].DOB;
strcpy(arrstu[i].course,"PG Diploma");
arrstu[i].duration = 6;
}
//for(i=0;i<SIZE;i++)
//{
printstudentinfo(arrstu);
//}
}
void printstudentinfo(STUDENT *s)//STUDENT s[10]
{
int i;
for(i=0;i<SIZE;i++)
{
printf("Student#%d Information\n",s[i].ID);
printf("Student Name:%s\n",s[i].sname);
printf("Father Name:%s\n",s[i].fname);
printf("Date of birth:%d-%d-%d\n",s[i].DOB.day,s[i].DOB.month,s[i].DOB.year);
printf("Date of Joining:%d-%d-%d\n",s[i].DOJ.day,s[i].DOJ.month,s[i].DOJ.year);
printf("Course name:%s\n",s[i].course);
printf("Duration:%d months\n",s[i].duration);
printf("-------------------------------\n");
}
}

