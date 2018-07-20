#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r=3,c=4;
	int i,j;

	int **ptr=(int **) malloc(r * sizeof(int *));
	for(i=0;i<r;i++)
	ptr[i]=(int *) malloc(c * sizeof(int));
	
	printf("enter elements for 4*5 matrix:\n");	
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		scanf("%d",&ptr[i][j]);
	}
	printf("\n");
	
	printf("entered elements are:\n");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++)
	{
		printf("%d\t",ptr[i][j]);
	}
	printf("\n");
	}
	
        printf("\n");

 	for(i=0;i<r;i++)
	free(ptr[i]);
	free(ptr);
}
