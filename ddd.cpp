#include<iostream>
using namespace std;
class Base{
	public:
		int z;
		void display()
		{
			cout<<" i am in base N the value is =  "<<z<<endl;
		}
};
class Derive : public Base
{
	public: int q;
	void display()
	{
		cout<<"i am in derive N the value is = "<<q<<endl;
	}
};
int main()
{
	Base b,*bbptr;
	Derive d,ddptr;
	bbptr= &b;
	bbptr->z = 40;
	bbptr->display();
	bbptr = &d;
	bbptr->q = 50;
	bbptr->display();
}