#include<iostream>
using namespace std;
class ptr
{
	int a,b;
	public:
	void set(int x,int y)
	{
		a=x;
		b=y;

	}
	void show()
	{
		cout<<"value of x is "<<this->a <<endl << "value of y is "<<this->b <<endl;
	}
	
};
int main()
{
	ptr obj,*h;
	h=&obj;
h->set(2,4);
h->show();
cout<<"address of h is : "<<h;
}
