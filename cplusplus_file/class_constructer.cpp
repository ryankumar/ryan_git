// example: class constructor

/* whenever a new object of this class is created. This constructor function must have the same name as the class, 
   and cannot have any return type; not even void.  We are going to implement CRectangle  including a constructor:  
*/

 #include <iostream>
 using namespace std; 
 class CRectangle { 
    int width, height; 
    public:
   CRectangle(){cout<<"hello world\n"<<endl;} 
    CRectangle (int,int); 
    int area () { return (width*height);} 
  }; 

  CRectangle::CRectangle (int a, int b) { 
  width = a; 
  height = b; 
  } 
 
 int main () { 
    CRectangle rect (3,4); 
    CRectangle rectb (5,6); 
    CRectangle re;
    cout << "rect area: " << rect.area() << endl; 
    cout << "rectb area: " << rectb.area() << endl; 
      return 0; 
 }
