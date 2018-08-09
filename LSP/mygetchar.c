#include<stdio.h>
#include<unistd.h>
void mygetchar(void);
int main()
{
   write(1,"getchar fun:\n",13);
    mygetchar();


}

void mygetchar(void)
{
   char c;
	read(0,&c,1);
   
	write(1,&c,1);
}
