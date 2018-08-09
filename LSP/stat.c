#include<unistd.h> 
 #include<stdlib.h>
 #include <stdio.h>
#include <time.h>

 #include <errno.h>

#include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
  int main(int argc,char *argv[])
{

    int fd[10],i;
	struct stat buf;
	if(argc>1)
	 {
	    for(i=1;i<argc;i++)
	     {
		write(1,"****",4);
	       write(1,argv[i],sizeof(argv[i]));
		 write(1,"****\n",5);
    	   	fd[i]=open(argv[i],O_RDONLY);
		if(fd[i]<0)
		 {
		    perror("error");
			exit(0);
		 }
		
	   fstat(fd[i],&buf);
    	
	 printf("file type :%ld\n     ",buf.st_ino);
	 printf("ID of device containing file :%ld\n     ",buf.st_dev);
	 printf("RDWR PERMISSION  :%o\n     ",buf.st_mode);
	printf("number of hard links :%ld\n     ",buf.st_nlink);
	printf("user ID of owner :%d\n     ",buf.st_uid);
	printf("total size, in bytes  :%ld\n     ",buf.st_size);	
	printf("time of last access  :%s\n     ",ctime(&buf.st_atime));
        printf("time of last modification  :%s\n     ",ctime(&buf.st_mtime));
	printf("time of last status change  :%s\n     ",ctime(&buf.st_ctime));
        
	    }
	}

  /* switch(sb.st_mode & S_IFMT)
    {
	case S_IFREG: printf(" it is a regular file?\n");break;
	case S_ISDIR:printf("it is a directory\n");break;
   }
*/
     if ((buf.st_mode & S_IFMT) == S_IFREG)
      printf(" it is a regular file\n");
      if ((buf.st_mode & S_IFMT) == S_IFDIR)
	printf(" it is a directory\n");
}
