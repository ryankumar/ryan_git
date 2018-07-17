#include<stdio.h>
#include<string.h>
int main()
 {
   typedef struct STU
     {
	char name[100];
	int dDOB;
	int mDOB;
	int yDOB;
     }student;
	int flag=0;
   student s1,s2;
   strcpy(s1.name,"ryaan");
   strcpy(s2.name,"kumar");
  printf("entre their dd-mm-yy: ");
  scanf("%d%d%d%d%d%d",&s1.dDOB,&s1.mDOB,&s1.yDOB,&s2.dDOB,&s2.mDOB,&s2.yDOB);
   if(s1.yDOB>s2.yDOB)
	flag=1;
   else if(s1.mDOB>s2.mDOB)
	flag=1;
   else if(s1.s1.dDOB>s2.dDOB)
	flag =1;
   else if(s1.yDOB==s2.yDOB && s1.mDOB==s2.mDOB && s1.dDOB==s2.dDOB)
	 flag=-1;
  if(flag==1)
	printf("elder name is %s\n DOB:%d-%d-%d\n",s1.name,s1.dDOB,s1.mDOB,s1.yDOB);
  else if(flag==-1)
	printf("both are twin\n");
  else
	printf("elder name is %s\n DOB:%d-%d-%d\n",s2.name,s2.dDOB,s2.mDOB,s2.yDOB);
 }
