#include<stdio.h>
#include"student.h"
#include<string.h>
int main()
{
IDP u1;
printf("%d\n",sizeof(u1));
int idpt;
printf("Enter ID Proof type:1)Aadhar,2)Voter,3)PAN\n");
scanf("%d",&idpt);
if(idpt == 1)
{
scanf("%s",u1.aadhar);
}
else if(idpt = 2)
{
scanf("%s",u1.voter);
}
else
{
scanf("%s",u1.PAN);
}

}
