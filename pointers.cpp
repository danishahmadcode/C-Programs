#include<stdio.h>
using namespace std;
class A
{
	int x;
	public:
		void get()
		{
			int y;
			x=y;
			
		}
		void display()
		{
		cout<<"the value of x is: "<<y<<endl;
		}
};
int main()
{
	A obj;
	obj.get();
	obj.display();
}
