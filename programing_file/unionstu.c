#include<stdio.h>
#include<string.h>
#include"student.h"
int main()
{

STUDENT s={1,"name","fname",{1,1,2000},{2,5,2018},"AKX@23244",3,"PG",6};
if(s.idpt == 1)
printf("%s\n",s.idproof.aadhar);
if(s.idpt == 2)
printf("%s\n",s.idproof.voter);
if(s.idpt == 3)
printf("%s\n",s.idproof.PAN);
}
