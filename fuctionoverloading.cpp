#include<iostream>
using namespace std;
void display();
void display(int);
void display(int,float);
void display(int,float,char);

int main()
{
	display();
	display(2);
	display(2 , 2.4);
	display(2, 2.4, 'c');
	 
}
void display()
{
	cout<<"this is display() call "<<endl;
	
}
void display(int i)
{
	cout<<"this is display(int) call "<<endl;
	cout<<"the value of i is: "<<i<<endl;

	
}
void display(int i,float f)
{
	cout<<"this is display(int,float) call "<<endl;
	cout<<"the value of i and f is: "<<i<<" "<<f<<endl;

	
}
void display(int i,float f,char c)
{
	cout<<"this is display(int,float,char) call "<<endl;
	cout<<"the value of i,f and c is: "<<i<<" "<<f<<" "<<c<<endl;

	
}

