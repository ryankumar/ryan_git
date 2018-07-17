#include<stdio.h>
#include<string.h>
 struct STU
 {
	
	char sname[100];
	char fname[100];
	int dDOB;
	int mDOB;
	int yDOB;
	char CN[200];
	int dur,id;
 };
int main()
 {
 void   sdetailsprint(struct STU s);
 struct STU s1={"rohan","johan",3,4,1998,"embedded system",6};
	s1.id=1;
 struct STU  s2;
	s2.id=2;
	strcpy(s2.sname,"ryaan");
	strcpy(s2.fname,"salman");
	s2.dDOB=9;
	s2.mDOB=12;
	s2.yDOB=1993;
	strcpy(s2.CN,"vlsi designer");
	s2.dur=3;
   sdetailsprint(s1);
   sdetailsprint(s2);
 } 

 void sdetailsprint(struct STU s)
  {
    printf("student-%d information:\n---------------------\n",s.id);
    printf("student name:%s\n",s.sname);
    printf("father name: %s\n",s.fname);
    printf("dd-mm-yy:%d-%d-%d\n",s.dDOB,s.mDOB,s.yDOB);
    printf("course name:%s\n course duration:%d\n\n",s.CN,s.dur);
  }
