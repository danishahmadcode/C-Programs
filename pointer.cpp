#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void set_value(int y)
		{
			x=y;
			
		}
		void display()
		{
			cout<<"the value of x:"<<x<<endl;
			
		}
};
int main()
{
	A obj,*ptr;
	obj.set_value(10);
	obj.display();
	ptr=&obj;
	ptr->set_value(50);
	ptr->display();
	
	
}