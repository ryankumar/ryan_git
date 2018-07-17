#include<stdio.h>
void readstudent(STUDENT *s)
  {
    scanf("%s%s",s->name,s->gname);
    scanf("%d%d%d",&s->dob.d,&s->dob.m,&s->dob.y);
    scanf("%d%d%d",&s->dom.d,&s->dom.m,&s->dom.y);
    scanf("%d",&s->ldur);
  }
 void printstudent(STUDENT s)
   {
     printf("student:%d info\n**********************\n",s.id);
     printf("student name: %s\n student gname: %s\n",s.name,s.gname);
     printf("dob:%d-%d-%d\n",s.dob.d,s.dob.m,s.dob.y);
     printf("dom:%d-%d-%d\n",s.dom.d,s.dom.m,s.dom.y);
     printf("ldur:%dyr\n*******************\n",s.ldur);
   }

