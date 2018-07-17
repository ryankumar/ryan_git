#include <stdio.h>
#include "include.h"

int main ()
{

printf ("Hello world\n");
#ifdef ADD
printf ("add 2 numbers:%d\n",add(2,3));
#endif
#ifdef SUB
printf ("sub 2 numbers:%d\n",sub(4,2));
#endif

return 0;
}
