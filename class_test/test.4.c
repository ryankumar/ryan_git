#include<stdio.h>
int fun(int num)
{
 return ++num;

}
  int main()
  {
    int num=10;
     fun(num);
       printf("%d",num);
  }
