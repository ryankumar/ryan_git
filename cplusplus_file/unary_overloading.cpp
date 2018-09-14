#include <iostream>
using namespace std;

struct X { };

void operator!(X) {
	  cout << "void operator!(X)" << endl;
}

struct Y {
   	void operator!() 
         {
	     cout << "void Y::operator!()" << endl;
         }
};

struct Z { };

void operator!(Z) {
	          cout << "void operator!(Z)" << endl;
}

struct P{
	void operator!()
	{
		cout << "void P::operator!(P)"<< endl;
	}
};
int main() 
{
	X ox; Y oy; Z oz; P op;
	!ox;
	!oy;
	  !oz;
	  !op;
	      
}
