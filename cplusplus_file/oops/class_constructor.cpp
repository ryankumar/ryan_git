/* a class can include a special function called constructor, which is automatically called
whenever a new object of this class is created. This constructor function must have the same name as the class,
and cannot have any return type; not even void.
*/
#include<iostream>

using namespace std;
 class crectangle{
  int x, y;
public:
  crectangle(int ,int ); // it can be writen in below format also

  int area(void)
   {
     return x*y;
   }
 };

crectangle::crectangle(int a,int b)
{
  x=a;y=b;
}

int main()
{
  
  crectangle rect(3,4);
  crectangle rectb(5,6);
   cout<<"area a:"<<rect.area()<<endl;
   cout<<"area b:"<<rectb.area()<<endl;
   return 0;
}
