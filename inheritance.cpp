#include<iostream>
using namespace std;
class A{
	int i = 100;
	public:
	int j = 50;
	void show()
	{
		cout<<"value of i & j are "<<i<<" " <<j;
	}
};
int main()
{
	A obj;
	obj.show();
}