#include<iostream>
using namespace std;
class sum
{
	int a ,b;


	public:
	
    void getdata(int x,int y)
	{
		a = x;
		b = y;

	}
	
	
	void show()
	{
		cout<<a<<endl;
		cout<<b<<endl;
	}

	
   void add()
	{
	    int c;
		c = a+b;
		
		 cout<<"the sum of two digits is: "<<c<<endl;	
	}
	
};

int main()
{

	sum o1;
    o1.getdata(8,9);
    o1.show();
   o1.add();
	

	
	
}
