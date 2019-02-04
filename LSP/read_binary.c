#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	const char *mytext = "The quick brown fox jumps over the lazy dog";   
	FILE *bfp= fopen("hello.c", "wb");   
	if (bfp) 
	{     
		fwrite(mytext, sizeof(char), strlen(mytext), bfp);     
		fclose(bfp);   
	}
}
