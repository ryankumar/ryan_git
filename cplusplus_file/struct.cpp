#include<iostream>
#include<cstring>
using namespace std;
 struct student
 {
   int roll;
   string  name; // char name[20];
  };
int  main()
 {
   student s;
//  strcpy(s.name,"ryan");
  s.name="ryan";
 s.roll=1234;
 cout<<s.name<<endl<<s.roll<<endl;
 }
