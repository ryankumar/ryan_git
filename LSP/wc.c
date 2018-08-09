#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc,char * argv[])
{
  
	int fd[10],i,line,word,count,temp,tcount=0,tline=0,tword=0;
	char curr,prev=' ';
	if(argc>1)
	 {
	     for(i=1;i<argc;i++)
	      {
	         prev=' ';
		 line=0;word=0;count=0;temp=0;
		fd[i]=open(argv[i],O_RDONLY);
		
	 	if(fd[i]<0)
		 {
		    write(2,"wc:",3);
		    write(2,argv[i],sizeof(argv[i]));
		   write(2,": No such file or directory\n",28);
		   exit(0);
		 }
		
		else
		  {
		     while(read(fd[i],&curr,1)==1)
			{
			   			  
        		   if((curr==' ' || curr=='\n') && (!(prev==' ' || prev=='\n') ))
			       word++;
			  if(curr=='\n')
			    line++;
			     count++;     
			   prev=curr;
		        }
                     printf("%d   %d   %d    %s\n",line,word,count,argv[i]);
	           }
		tcount=tcount+count;
		tword=tword+word;
		tline=tline+line;
	     
	    }
		printf("%d   %d   %d    total\n",tline,tword,tcount);
  }	  }
