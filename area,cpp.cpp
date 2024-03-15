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
		   cout<<"now the size of rectangle "<<endl;
		    cout<<"enter the length of rectangle: ";
			cin>>length;
			cout<<"enter the breadth of rectangle: " ;
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
		return  3.14 *  dimension * dimension;
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
	  cout<<"firstly the size of sqaure "<<endl;
    cout<<"enter the side of sqaure: ";
    s.getdimension();
    cout<<"the area of sqaure is "<<s.calculatearea() <<endl<<endl;
    
    cout<<"secondly the size of circle"<<endl;
	cout<<"enter the radius of circle: ";
    c.getdimension();
    cout<<"area of circle is "<<c.calculatearea()<<endl<<endl;
    
  
    r.getsize();
    cout<<"area of rectangle is "<<r.calculatearearect()<<endl;
    
    return 0;
    
}

