#include<iostream>
//#define OS  1
 using namespace std;
 int main()
  {
    #if OS ==1
     cout<<"welcome to windows"<<endl;
    #elif OS==2
	cout<<"welcome to linux"<< endl;
    #elif OS==3
	cout<<"welcome to solaries"<<endl;
    #else
	cout<<"shutdown the os"<<endl;
   #endif
  }
