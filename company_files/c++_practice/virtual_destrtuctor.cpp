// CPP program without virtual destructor 
// causing undefined behavior
/*
 #include<iostream>
using namespace std;
   
class base {

   	public:
         base()     
   	 { cout<<"Constructing base \n"; }
  	 ~base()
  	 { cout<<"Destructing base \n"; }     
  };
                      
 class derived: public base {
 	 public:
		 derived()     
		 { cout<<"Constructing derived \n"; }
		 ~derived()
		 { cout<<"Destructing derived \n"; }
 };                                         
int main(void)
{
	derived *d = new derived();  
	base *b = d;
//	delete b; // before destrctor called pointer b is released;hence ~base() is not called;
	delete d; // here instead of b if d is releaseed then ~base() is called;check output by commenting reversly; 
        
	return 0;
}
*/

/**************************************************************************************************
                     WITH VIRTUAL DESTRUCTOR
***************************************************************************************************/

// A program with virtual destructor
#include<iostream>
using namespace std;
class base {

 	public:
 	base()     
 	{ cout<<"Constructing base \n"; }
 
	virtual ~base()  //virtual destructor
 	{ cout<<"Destructing base \n"; }     
};

class derived: public base {
	public:
		derived()     
		{ cout<<"Constructing derived \n"; }
		~derived()
		{ cout<<"Destructing derived \n"; }
};

int main(void)
{
	derived *d = new derived();  
	base *b = d;
	delete b;
//	getchar();
	return 0;
}

/*As a guideline, any time you have a virtual function in a class, you should immediately add a virtual destructor (even if it does nothing). T  his way, you ensure against any surprises later.
 */
