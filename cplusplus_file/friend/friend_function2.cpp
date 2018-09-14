
/****************************************
 *    Addition of members of two different classes USING FRIEND FUNCTION
 *    *********************/


#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
	 A():x(3) {};
	friend int add(A,B);
};

class B
{
   	int y;
	public:
	B():y(4) {};
	friend int add(A,B);
};



// Note: add()  is not a member function of any class.
// Because add() is a friend of A and B , it can
// directly access any member of this class
int add(A a ,B b)
{
	return (a.x +b.y);
}

int main()
{
	A a;
	B b;
	cout<<"sum:"<< add(a,b)<<endl;
	return 0;
}

