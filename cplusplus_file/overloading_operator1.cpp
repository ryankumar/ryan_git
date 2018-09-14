#include<iostream>
using namespace std;

class operat{
	public:
	int real;
	int img;
	int mix;
       	 operat(){;}
	 operat(int,int,int);
	operat operator + ( const operat&) ;
};

 operat::operat(int a,int b,int c)
{
	real=a;
	img=b;
	mix=c;
}

operat operat:: operator + ( const operat& param)
{
	operat temp;
	temp.real=real + param.real;
	temp.img=img + param.img;
	temp.mix=mix + param.mix;
	return temp;
}

int main()
{
	operat x(3,2,5);
	operat y(4,2,4);
	operat z=x + y;
	cout<<z.real<<"+i"<<z.img<<"+j"<<z.mix<<endl;
	return 0;
}
