#include <stdio.h> 

int main() 
{ 
	FILE * fp; 

	fp = fopen ("test.txt", "w+"); 

	fputs("Hi this is an example",fp); 

	fclose(fp); 

	return 0; 
}
