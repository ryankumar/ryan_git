#include<iostream>
//#include<cstddef>
using namespace std;
 //#define MIN(a,b) (a<b?a:b)
//#define MAX 20
 int main()
  {
   int *pointer=nullptr;
  pointer=new int[10];
  cout<<pointer<<endl<<sizeof(new int[10])<<endl;  
*(pointer+0)=20;
*(pointer +1)=30;
*(pointer +2)=40;
 cout<<*pointer<<endl<<*(pointer+1)<<endl<<*(pointer+2)<<endl;
 delete []pointer;
 pointer=nullptr;
 cout<<pointer;
  }
