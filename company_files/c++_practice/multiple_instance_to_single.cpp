#include<iostream>
using namespace std;

class CMyClass
{
	private:
		  CMyClass() {}         
		  static int nCount;      
		  static int nMaxInstance; 

	public:
	         ~CMyClass();                      
		 static CMyClass* CreateInstance();

};

int CMyClass::nCount = 0;
int CMyClass::nMaxInstance = 1; 

CMyClass::~CMyClass()
{
	  --nCount;
	cout<<"Destructor is called"<<endl;		
}

CMyClass* CMyClass::CreateInstance()
{
      static  CMyClass* ptr = NULL;

	    if(nMaxInstance > nCount)
   	     {
 		     ptr = new CMyClass;  
		     ++nCount;		     // Increment no. of instances
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
	s=CMyClass::CreateInstance();
	t=CMyClass::CreateInstance();
	p=CMyClass::CreateInstance();
	cout<< s<< endl;
	cout<< t <<endl;
	cout<< p<<endl;
	return 0;
}
	


