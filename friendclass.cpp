#include<iostream>
using namespace std;
class b;
class a{
	int x;
	public: 
		void get(){
			cout<<"Enter the value of x "<<endl;
			cin>>x;
		}	
		friend b;
};
class b{
	public:
	void display(a obj){
		cout<<"The value of x is "<<obj.x<<endl;
	}
};
int main(){
	a obj;
	b obj1;
	obj.get();
	obj1.display(obj);
}
