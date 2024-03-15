#include<iostream>
using namespace std;
template<class T>
class A
{
	T x, y;
	public:
		A(T i,T j)
		{
			x=i;
			y=j;
		}
        void sum()
		{
			T s;
			s= x+y;
			cout<<"the sum of two numbers is: "<<s<<endl;	
		}		
};

int main()
{
	A<int>obj(8,9);
	obj.sum();
	
	A<float>obj2(8.3,9.6);
	obj2.sum();
	return 0;
}
