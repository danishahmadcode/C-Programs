#include<iostream>
using namespace std;
class shape
{
	protected :
		float dimension;
	public:
		void getdimension()
		{
			cin>>dimension;
		}
	virtual float calculatearea()= 0;
		
};
class size
{
	protected :
		float length;
		float breadth;
	public:
		void getsize()
		{
			cin>>length;
			cin>>breadth;
		}
		virtual float calculatearearect()= 0;
};
class sqaure : public shape
{
	public:
	float calculatearea()
	{
		return dimension * dimension;
	}
};
class circle : public shape
{
	public:
	float calculatearea()
	{
		return  3.14 * dimension * dimension;
	}
};
class rectangle : public size
{
	public:
	float calculatearearect()
	{
		return length * breadth;
	}
};

int main()
{
	sqaure s;
	circle c;
	rectangle r;
    cout<<"enter the side of sqaure: "<<endl;
    s.getdimension();
    cout<<"area of sqaure is"<<s.calculatearea() <<endl;
    
    cout<<"enter the radius of circle: "<<endl;
    c.getdimension();
    cout<<"area of circle is"<<endl;
    c.calculatearea();
    
    cout<<"enter the length and breadth of rectangle: "<<endl;
    r.getsize();
    cout<<"area of rectangle is"<<r.calculatearearect()<<endl;
    
    return 0;
    
}

