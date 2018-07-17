#include <iostream>
using namespace std;

#define MIN(a,b) (((a)<(b)) ? a : b)

int main () 
{
   int i, j;
   
   i = 100;
   j = 30;

#ifdef DEBUG
   cerr <<"Trace: Inside main function" << endl;
#endif

#if 0
  
    /* This is commented part */
     cout << MKSTR(HELLO C++) << endl;
#endif

#ifndef DEBUG
  #define DEBUG
#endif
   cout <<"The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif

   return 0;
}
