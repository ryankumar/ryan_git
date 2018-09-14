/* Suppose, two base classes have a same function which is not overridden in derived class.
 * If you try to call the function using the object of the derived class, compiler shows error. It's because compiler doesn't know which function to call. For example,
 * */

#include<iostream>
using namespace std;

class base1
{
	public:
		void someFunction( )
		{ cout<< "base1"<<endl; }  
};

class base2
{
	public:
		void someFunction( )
		{ cout<<"base2"<<endl;} 
};

class derived : public base1, public base2
{
	
};

int main()
{
	    derived obj;
 
	//        obj.someFunction(); // Error! 
		
	   //This problem can be solved using scope resolution function to specify which function to class either base1 or base2
	     obj.base1::someFunction();
	    obj.base2::someFunction(); 
}


