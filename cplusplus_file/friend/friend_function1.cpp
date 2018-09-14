//without  freind functions
/*
#include<iostream>
using namespace std;

class crectangle {
	int x,y;
	public:
	  void set_values(int,int);
	  int area() {return x*y;};
	  crectangle duplicate(crectangle);
};

void crectangle:: set_values(int a,int b)
{
	x=a;
	y=b;
}

crectangle crectangle::duplicate(crectangle param)
{
	crectangle rect;
	rect.x=param.x*2;
	rect.y=param.y*2;
	return rect;
}

int main()
{
	crectangle recta,rectb,rectc;
	recta.set_values(2,3);
	rectb=rectc.duplicate(recta);
	cout<<rectb.area();
	return 0;
}

*/

/****************************************
 *    USING FRIEND FUNCTION
 *    *********************/


#include<iostream>
using namespace std;

class crectangle 
{
	int x,y;
	public:
	void set_values(int,int);
	int area() {return x*y;};
	friend crectangle duplicate(crectangle);
};

void crectangle:: set_values(int a,int b)
{
	x=a;
	y=b;
}


// Note: duplicate() is not a member function of any class.
// Because duplicate() is a friend of Box, it can
// directly access any member of this class
crectangle duplicate(crectangle param)
{
	crectangle rect;
	rect.x=param.x*2;
	rect.y=param.y*2;
        return rect;
}

int main()
{
	crectangle recta,rectb;
	recta.set_values(2,3);

	rectb=duplicate(recta);
	cout<<rectb.area();
	return 0;
}

