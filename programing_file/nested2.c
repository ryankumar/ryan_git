#include"student.h"
int main()
{
struct Dt d = {1,2,2000};
printf("size of student data type:%d\n",sizeof(STUDENT));
printf("%d-%d-%d\n",d.day,d.month,d.year);
}
