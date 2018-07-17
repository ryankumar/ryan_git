#include<stdio.h>
 int mystrcmp(char [],char[]);
 void swap(char [],char []);
 int main()
  {
         char name[][20]={"kernel","masters","american","megatrend","global","edge"};
  	 int i,j;
     		for(i=0;i<6;i++)
       		printf("%s\n",name[i]);
     
     		for(i=0;i<6;i++)      
	       	  for(j=i;j<6;j++)
    		    {
		       if(strcmp(name[i],name[j])>0)
	                   swap(name[i],name[j]);
		    }
  
 			 printf("ascending order is: \n");
   				for(i=0;i<6;i++)
       				   printf("%s\n",name[i]);
   }

 int mystrcmp(char ch1[],char ch2[])
   {
 	       int i=0,c=0;
        	  while(ch1[i]!='\0' && ch2[i]!='\0')
         	     {
            		if(ch1[i]==ch2[i])
               		    i++;
           		else {
                		c= ch1[i]-ch2[i];
                		return c;
                	     }
         	     }
           	  return ch1[i]-ch2[i];
    }


 void swap(char str1[],char str2[])
   {
		char temp;
		 int i;
     		for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
 		  {
	  		  temp=str1[i];
			  str1[i]=str2[i];
	   		  str2[i]=temp;
		  }
   }
