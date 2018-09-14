

/****************************************
 *    Addition of members of two different classes USING FRIEND FUNCTION
 *    *********************/


#include<iostream>
using namespace std;
class B;

class A
{
	int x,y;
	public:
	 int area() {return x*y;}
	 void convert (B);
};


class B
{
   	int z;
	public:
	 void set_side(int a) {z=a;}
	friend class A; // class A is the friend class of B but not member; 
			//thus member function of class A can access any member of class B; 
};



void A:: convert( B b)
{
	x=b.z;
	y=b.z;
}


int main()
{
	A a;
	B b;
	b.set_side(4);
	a.convert(b);
	cout<<"area:"<< a.area()<<endl;
	return 0;
}

