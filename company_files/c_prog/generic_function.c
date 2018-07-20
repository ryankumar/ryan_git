#include<stdio.h>
typedef enum 
{
	INT,
	FLOAT,
	CHAR,
	DOUBLE
}datatypes;
void generic_function(void *ptr,datatypes data_type)
{
		
	if(data_type==INT)
	{
		int *var=(int *) ptr;
		printf("%d\n",*var);
	}
	if(data_type==FLOAT)
	{
		float *var=(float *) ptr;
		printf("%f\n",*var);
	}
	if(data_type==CHAR)
	{
		char *var=(char *) ptr;
		printf("%c\n",*var);
	}
	if(data_type==DOUBLE)
	{
		double *var=(double *) ptr;
		printf("%lf\n",*var);
	}

}
int main()
{
	datatypes data_type;
	void *ptr=NULL;
	int i=10;
	float f=3.45;
	char ch='a';
	double d=2.34;
	ptr=(void *)&i;
	generic_function(ptr,INT);
	ptr=(void *)&f;
	generic_function(ptr,FLOAT);
	ptr=(void *)&ch;
	generic_function(ptr,CHAR);
	ptr=(void *)&d;
	generic_function(ptr,DOUBLE);
	
}


