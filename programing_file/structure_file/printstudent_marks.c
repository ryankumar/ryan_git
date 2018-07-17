#include<stdio.h>
#include"student_struct.h"
//#include "student_marks.c"
void printstudent(STUDENT s)
 {
  
    if(s.mark>60)
     {
	printf("----------------------------------\nTopper student id:%d\n-----------------------\n",s.id);
	printf(" name :%s\n",s.name);
	printf("c/o:%s\n",s.fname);
	printf("DOB:%d-%d-%d\n",s.DOB.d,s.DOB.m,s.DOB.y);
	printf("student mark :%d\n",s.mark);
	if(pf==aadhar)
         printf("Aadhar :%s\n",s.IDP.aadhar);
        if(pf==voter)
	  printf("voter :%s\n",s.IDP.voter);
        if(pf==pan)
	   printf("pan :%s\n",s.IDP.pan);
        if(pf==dl)
           printf("dl :%s\n",s.IDP.dl);
     }
   
   else if(s.mark>30 && s.mark<60)
     {
	printf("------------------------\nsecond class student id:%d\n----------------------\n",s.id);
           printf(" name :%s\n",s.name);
          printf("c/o:%s\n",s.fname);
          printf("DOB:%d-%d-%d\n",s.DOB.d,s.DOB.m,s.DOB.y);
          printf("student mark :%d\n",s.mark);
          if(s.idpt==1)
           printf("Aadhar :%s\n",s.IDP.aadhar);
          if(s.idpt==2)
            printf("voter :%s\n",s.IDP.voter);
          if(s.idpt==3)
             printf("pan :%s\n",s.IDP.pan);
          if(s.idpt==4)
             printf("dl :%s\n",s.IDP.dl);
     }            
       
   else
    {

	printf("----------------------\nmarks below 30percent student id:%d\n------------------------\n",s.id);
           printf(" name :%s\n",s.name);
          printf("c/o:%s\n",s.fname);
          printf("DOB:%d-%d-%d\n",s.DOB.d,s.DOB.m,s.DOB.y);
          printf("student mark :%d\n",s.mark);
          if(s.idpt==1)
           printf("Aadhar :%s\n",s.IDP.aadhar);
          if(s.idpt==2)
            printf("voter :%s\n",s.IDP.voter);
          if(s.idpt==3)
             printf("pan :%s\n",s.IDP.pan);
          if(s.idpt==4)
             printf("dl :%s\n",s.IDP.dl);
    }            
	
  printf("\n");
 }
