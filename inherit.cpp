//INHERITANCE AND VIRTUALBASE CLASS:-
#include<iostream>
using namespace std;
class a{
	int x=10;
	public:
		int y=5;
		void show()
		{
			cout<< "value of x  is:" <<x; 
			cout<< "\nvalue of y is:" <<y; 
		}
};
class b:public  virtual a{
	public:
	void showb()
	{
		//cout<< "value of x is:" <<x;
		cout<< "value of y is:" <<y;
	}
};
class c:public virtual a
{
	public:
		void showc()
		{
		//cout<< "value of x is:" <<x;
		cout<< "value of y is:" <<y;
		}
};
class d:public c,b
{
	
};
int main()
{
	a obj;
	b obj2;
	c obj3;
	d obj4;
	obj4.show();
}