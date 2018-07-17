#include<stdio.h>
int mystrcmp(char [],char []);
int mystricmp(char [],char []);
void  SWAP(char * *,char * *);
 int main(int argc,char * argv[])
  {
    printf("no of arguments:%d\n",argc);
	int i,j,k=2;
	char *temp;
	 for(i=2;i<argc;i++)
	   { for(j=i+1;j<argc;j++)
	       {
		  if(argv[1][0]=='-' && argv[1][1]=='i' && argv[1][2]=='\0' && argv [2][1]!='-') // "-i"
	     	      {
			if(mystricmp(argv[i],argv[j])>0)
		          SWAP(&argv[i],&argv[j]);
	   	      }
		  else if(argv[1][0]=='-' && argv[1][1]=='r' && argv[1][2]=='\0' && argv[2][0]!='-') //"-r"
		      {
			if(mystrcmp(argv[i],argv[j])<0)
		  	   SWAP(&argv[i],&argv[j]);
		      }
		  else if(argv[1][0]=='-' && argv[2][0]=='-' && (argv[1][1]=='i' && argv[2][1]=='r' || argv[1][1]=='r' && argv[2][1]=='i'))
		       {  k=3;			// "-i-r"
			 if(i>2)
			 {  
			    if( mystricmp(argv[i],argv[j])<0)  
			        SWAP(&argv[i],&argv[j]);
			 }
	   	       } 
		  else if(argv[1][0]!='-')
		     {	
			goto end;
		     }
		  else
		     { printf("enter a proper command\n");
			return 0;
		     }
		}
	   }
	printf("k=%d\n",k);
	for(i=k;i<argc;i++)
	   printf("%s\n",argv[i]);return 0;
	end: {for(i=k;i<argc;i++)   
	       { for(j=i+1;j<argc;j++)
	          {
		    if(mystrcmp(argv[i],argv[j])>0)
			SWAP(&argv[i],&argv[j]);
		  }
		printf("%s\n",argv[i]);
              }
	   }
	return 0;
   }

 
  int mystricmp(char ch1[],char ch2[])  //case in-sensitive
    {
        int i=0;
        char temp1[30];
        char temp2[30];
        while(ch1[i]!='\0' && ch2[i]!='\0')
         {
           
                temp1[i]=ch1[i];
                temp2[i]=ch2[i];
      	
                   if(ch1[i]>='A' && ch1[i]<='Z')
                          temp1[i]=ch1[i]+32;

                   if(ch2[i]>='A' && ch2[i]<='Z')
                          temp2[i]=ch2[i]+32;

                   if(temp1[i]==temp2[i])
                          i++;
		   else 
                        return temp1[i]-temp2[i];
          }
	return ch1[i]-ch2[i];
   }

 int mystrcmp(char ch1[],char ch2[]) //case sensitive
   {
	int i=0;
	  while(ch1[i]!=0 && ch2[i]!=0)
	    {  
		
               if(ch1[i]==ch2[i])
                   i++;
	        else 
                    return ch1[i]-ch2[i];
	    } 
	   
      return ch1[i]-ch2[i];
   }
        
 void SWAP(char * *ptr1,char * *ptr2)
  {
     char *temp;
 	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
 }
