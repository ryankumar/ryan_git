#include<stdio.h>
 int mystrcmp(char [] ,char [] );
 void swap(char * * ,char * *);
 int main()
  {
         char * ptr[]={"kernel","masters","american","megatrend","global","edge"};
	 int i,j; 
            for(i=0;i<6;i++)
		for(j=i+1;j<6;j++)
                    {
                       if(mystrcmp( ptr[i],  ptr[j])>0)
                      	  swap(&ptr[i],&ptr[j]);
                      }

                         printf("ascending order is: \n");
                                for(i=0;i<6;i++)
                                   printf("%s\n",ptr[i]);
   }

 int mystrcmp(char  ch1[],char ch2[])
   {
               int i=0,c=0;
	          while( ch1[i]!='\0' &&  ch2[i]!='\0')
                     {
                        if( ch1[i]== ch2[i])
                            i++;
                        else {
                                c= ch1[i]-ch2[i];
                                return c;
                             }
                     }
                  return ch1[i]- ch2[i];
    }


 void swap(char *(*str1),char *(*str2))
   {
                char *temp;
		temp=*str1;
		*str1=*str2;
		*str2=temp;
   }
