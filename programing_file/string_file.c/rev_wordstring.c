#include<stdio.h>
#include<string.h>
void rev(char []);
int main()
  {
	    char str[100];
	  printf("entre the strings\n");
  	  scanf("%[^\n]s",str);
   	  rev(str);
	   printf("%s\n",str);
	  return 0;
  }
 
void rev(char str[])
   {
	     int i,j,temp=0,start,start1,end;	
      		for(j=strlen(str)-1,i=0;i<j;i++,j--)
		   {
		       temp=str[i];
         	    str[i]=str[j];
		    str[j]=temp;
	           }
        	       str[strlen(str)]='\0';
       			printf("%s\n",str);
    	  	
		for(i=0;str[i]!='\0';)
        	{
	   	    for(start=i;str[start]!=' ' && start<strlen(str);start++)	   
	     	    {
	    	      }
	 		end=start;
	  	          for(start1=i,end=end-1;start1<end;start1++,end--)
	   		    {
				
				temp=str[start1];
				str[start1]=str[end];
				str[end]=temp;
				
	   		    }  	  
      				i=start;
				if(i<strlen(str))
				{
				  str[i]=' ';
				  i++;
				}
		        
		}

	
    }
