#include<iostream>
using namespace std;
template<class A,class B,class C>
 void display(A x,B y,C z)
 {
 	cout<<"the value of x is "<<x<<endl;
 	cout<<"the value of y is "<<y<<endl;
 	cout<<"the value of z is "<<z<<endl<<endl;
 }
 int main()
 {
 	display(5,6.5,'y');
 	display(5.6,6,'yg');
 	display('yJ',5,6.5);
 }
