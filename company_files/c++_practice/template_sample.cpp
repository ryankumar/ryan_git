// function template
//template <class mytype>
//template <class identifier> function_declaration; 
//template <typename identifier> function_declaration;
// function_name <type> (parameters);

/* note: int i; 
	long l; 
	k = GetMax (i,l); 
This would not be correct, since our GetMax function template expects two arguments of the same type, and in this 
call to it we use objects of two different types.  
*/

#include <iostream>
using namespace std; 

template <class T> 
	T GetMax (T a, T b) { 
//  		T result; 
  //		result = (a>b)? a : b; 
  //		return (result); 
// or we can write
		return (a>b ? a:b);
 	} 
int main () { 
	
	int i=5, j=6, k; 
	long l=10, m=5, n; 
  	k=GetMax <int> (i,j); 
  	n=GetMax <long> (l,m); 
  	cout << k << endl; 
  	cout << n << endl; 
	return 0; 
	} 
