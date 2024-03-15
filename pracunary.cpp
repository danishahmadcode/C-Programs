#include<iostream>
using namespace std;
class dd
{
	int x;
	public:
		void get()
		{
			cout<<"enter no: ";
			cin>>x;
			
			
		}
        void display()
        {
        	cout<<"the value of x is: "<<x<<endl;
		}
		
		dd operator+(dd obj1)
		{
			dd obj2;
			obj2.x= x + obj1.x;
			return obj2;
		}
};
int main()
{
	dd obj,obj1,obj2;
	obj.get();
	obj1.get();
	obj.display();
	obj1.display();

	
	obj2= obj+obj1;
    obj2.display();
}
