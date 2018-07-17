#include<stdio.h>
#include<string.h>
void revstr(char *,int ,int);
void swap(char* ,char* );
int main()
 {
   char str[10];
   int i=0,l;
  printf("enter the string\n");
  scanf("%s",str);
  l=strlen(str);
  revstr(str,i,l-1);
 printf("after revstr:%s\n",str);
 }
 
void revstr(char *ptr,int i,int j)
 {
   if(i>=j)
	return ;
   swap(&ptr[i],&ptr[j]);
    revstr(ptr,++i,--j);
 }

void swap(char *ptr1,char *ptr2)
 {
   char temp;
     temp=*ptr1;
     *ptr1=*ptr2;
     *ptr2=temp;
 // printf("after swap ptr1=%c\n ptr2=%c\n",*ptr1,*ptr2);
 }
 
   
