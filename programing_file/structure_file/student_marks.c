#include<stdio.h>
#include"student_struct.h"
#define SIZE 5
#define SWAP(a,b) {int t=a;a=b;b=t;}
 void printstudent(STUDENT);
int main()
 {
   STUDENT s[SIZE];
 int i,j;
	
	for(i=0;i<SIZE;i++)
 	 { 
	    printf("enter the id,name,fname,dob,marks for student#%d:\n",i+1);
	    scanf("%d",&s[i].id);
	    scanf("%s %s",s[i].name,s[i].fname);
	    scanf("%d%d%d",&s[i].DOB.d,&s[i].DOB.m,&s[i].DOB.y);
	    scanf("%d",&s[i].mark);
	    printf("idproof type 1.aadhar,2.voter,3.pan,4.dl");
	    scanf("%d",&pf);
	    if(pf==aadhar)
	     scanf("%s",s[i].IDP.aadhar);
	    if(pf==voter)
	      scanf("%s",s[i].IDP.voter);
	    if(pf==pan)
	      scanf("%s",s[i].IDP.pan);
	    if(pf==dl)
	      scanf("%s",s[i].IDP.dl);
         }

    for(i=0;i<SIZE;i++)
     {
       for(j=i+1;j<SIZE;j++)
	 {
	   if(s[i].mark < s[j].mark)
		SWAP(s[i].mark,s[j].mark)
	 }
     printstudent(s[i]);	
     }
}
	    
       
