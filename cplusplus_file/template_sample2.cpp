#include <iostream>
using namespace std; 

template <class T ,class U> 
        T GetMin (T a, U b) { 
                return (a<b ? a:b);
        } 
int main () { 
        
        int i=5, j=6, k; 
        long l=10, m=5, n; 
        k=GetMin <int,long> (i,l); 
        n=GetMin <int,long> (j,m); 
        cout << k << endl; 
        cout << n << endl; 
        return 0; 
        } 

