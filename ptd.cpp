#include <iostream>
using namespace std;
class A{
	public:
	int i;
	void fun(){
		cout<<"value of i : "<<i;
	}
};
class B :public A{
	public:
	int j;
	void fun2(){
		cout<<"value of i : "<<i;
		
		cout<<"value of j "<<j;
	}
};
A* ptr;
A obj;
B obj2;
ptr = &obj2;
ptr->i = 34;
ptr->fun();
