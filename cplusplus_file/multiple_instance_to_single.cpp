#include<iostream>
using namespace std;

class CMyClass
{
	public:
		  CMyClass() {}
	         ~CMyClass();                      
		  CMyClass* CreateInstance();

};

CMyClass* ptr = NULL;

CMyClass::~CMyClass() 
{
	cout<<"Destructor is called"<<endl;		
}

CMyClass* CMyClass::CreateInstance()
{

	    if(ptr==NULL)
   	     {
 		     ptr = new CMyClass;  
		     return ptr;
	     }
	    else
	    {
		return ptr; 
	    }
	      
}

int main()
{
    	CMyClass *s;
        CMyClass *t;
	CMyClass *p;
	CMyClass ip;
	cout<<s->CreateInstance()<<endl;
	cout<<t->CreateInstance()<<endl;
	cout<<p->CreateInstance()<<endl;
	cout<<ip.CreateInstance()<<endl;

	return 0;
}
	


