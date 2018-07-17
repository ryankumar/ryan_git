#include<stdio.h>
 #include<stdlib.h>
 char * myconcat(char *,int,char *,int);
 int main()
  {
    char *str1=(char *)malloc(20);
    char *str2=(char *)malloc(20);int m,n;
	printf("entre the 1st string\n");
	scanf("%[^\n]s",str1);
	printf("entre the 2nd string\n");
	scanf("\n%[^\n]s",str2);
	printf("no of char want to concat from both\n");
	scanf("\n%d%d",&m,&n);
        
	printf("after concate: %s\n",myconcat(str1,m,str2,n));
	free(str1);
	free(str2);
	str1=0;str2=0;
  }
 char * myconcat(char *str1,int m,char *str2,int n)
   {
	int i,j=0;
	char *str3=(char *)malloc(m+n);
        for(i=0;i<m;i++)
	   str3[i]=str1[i];
         for(i=m;i<m+n;i++)
	    str3[i]=str2[j++];
	 str3[i]='\0';
      return str3;
   }
