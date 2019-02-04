#include<stdio.h>
#include <stdlib.h>   // for exit() function

int main(int argc,char *argv[])
{
	char c[1000];
	FILE *fptr;

	if ((fptr = fopen(argv[1], "r")) == NULL)
	{
		printf("Error! opening file");
		// exit from program if file pointer returns NULL.
		exit(1);         
	}

	// read the text until newline 
	fscanf(fptr,"%s", c);

	printf("Data from the file:\n%s", c);
	fclose(fptr);

	return 0;
}
