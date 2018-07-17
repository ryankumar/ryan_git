#include<iostream>

using namespace std;
 class crectangle{
  int x, y;
public:
  void set_value(int a,int b) // it can be writen in below format also
   {
     x=a;y=b;
   }

  int area(void)
   {
     return x*y;
   }
 }rect,rectb;
/*
void crectangle:: set_value(int a,int b)
{
  x=a;y=b;
}
*/
int main()
{
  
   rect.set_value(3,4);
   rectb.set_value(5,6);
   cout<<"area a:"<<rect.area()<<endl;
   cout<<"area b:"<<rectb.area()<<endl;
   return 0;
}
