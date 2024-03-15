#include<iostream>
using namespace std;
class abc{
	public:
		int x,y;
		void show();
	};
	void abc::show()

{
	cout<<"the value of x is " <<x <<endl;
	cout<<"the value of y is "<<y<<endl;
}
		int main()
	{
		abc a,b;
		a.x=10;
		b.y=20;
		a.show();
		b.show();
	}