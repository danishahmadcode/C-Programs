#include<iostream>
using namespace std;
class ptr
{
	int a,b;
	public:
	void set(int x,int y)
	{
		this->a=x;
		this->b=y;
	}
	void show()
	{
		cout<<"value of x is "<<this->a <<endl <<"value of y is "<<this->b <<endl;
	}
	
};
int main()
{
	ptr obj;
	obj.set(2,4);
	obj.show();
	return 0;
}