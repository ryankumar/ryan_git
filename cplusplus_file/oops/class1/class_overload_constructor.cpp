//  overloading class constructors

/* Like any other function, a constructor can also be overloaded with more than one function that have the same
name but different types or number of parameters. Remember that for overloaded functions the compiler will call
the one whose parameters match the arguments used in the function call. In the case of constructors, which are
automatically called when an object is created, the one executed is the one that matches the arguments passed on
the object declaration: 
*/ 

#include<iostream>
using namespace std;
 class crectangle{
  int x, y;
   public:
   crectangle(int ,int ); // constructor
   crectangle();         // constructor with no arg
  int area(void)
   {
     return (x * y);
   }
 };

// constructor
crectangle::crectangle(int a,int b)
{
 x=a;
 y=b;
}

// destructor
crectangle::crectangle(){
  x=5;
  y=5;
  
 }

int main()
{
  
  crectangle rect;
  crectangle rectb(3,4);
   cout<<"area a:"<<rect.area()<<endl;
   cout<<"area b:"<<rectb.area()<<endl;
   return 0;
}
