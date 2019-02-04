#include<stdio.h>
//#include<conio.h>

void main(int argc,char *argv[])
{
	FILE *fp;
	char ch;
	int size = 0;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("\nFile unable to open...");
	}
	else
	{
		printf("\nFile opened...");
	}
	fseek(fp, 0, SEEK_END);    /* File pointer at the end of file */
	size = ftell(fp);   /* Take a position of file pointer in size variable */
	printf("The size of given file is: %d\n", size);
	fclose(fp);
}
