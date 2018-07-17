#include<stdio.h>
#include "../inc/include.h"

int main() {
	printf("calculator programm\n");
#ifdef ADD
	printf("add fun:%d\n",add(10,5));
#endif
#ifdef SUB
	printf("sub fun:%d\n",sub(10,5));
#endif
	return 0;
}


