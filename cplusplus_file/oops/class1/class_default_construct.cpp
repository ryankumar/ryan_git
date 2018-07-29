
#include<iostream>
using namespace std;
 class crectangle{
 public:
  int x, y,z;
  crectangle(int a,int b)
   {
     x=a;y=b;
   };
 void area() { z=x*y; };
 };

int main()
{
  
  crectangle rect(2,3);
  rect.area();
   cout<<"area a:"<<rect.z<<endl;
   return 0;
}
