// example on constructors and destructors
//The destructor must have the same name as the class, but preceded with a tilde sign (~) and it must also return no
//value. 

#include<iostream>
using namespace std;
 class crectangle{
  int *x, *y;
   public:
   crectangle(int ,int ); // constructor
   ~crectangle();         // destructor
  int area(void)
   {
     return (*x * *y);
   }
 };

// constructor
crectangle::crectangle(int a,int b)
{
 x=new int; // dynamically allocation single element
 y=new int; //dynamically allocation of single element
  *x=a;*y=b;
}

// destructor
crectangle::~crectangle(){
  delete x; // release pointer
  delete y; // release pointer
 }

int main()
{
  
  crectangle rect(3,4);
  crectangle rectb(5,6);
   cout<<"area a:"<<rect.area()<<endl;
   cout<<"area b:"<<rectb.area()<<endl;
   return 0;
}
