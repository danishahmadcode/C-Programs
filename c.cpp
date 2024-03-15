#include<iostream>
using namespace std;
class fibo{
	
	void fib1()
	{int i=2;
	while(i<num)
	{
		f3=f1+f2;
		cout<<f3<<" ";
		f1=f2;
		f2=f3;
		i++;
	}
}
};
int main()
{public:
	int f1=0,f2=1,f3,num;
	cout<<"enter limit:"<<" ";
	cin>>num;
	cout<<"FIBONACCI SERIES IS AS:"<<endl;
	cout<<f1<<" "<<f2<<" ";
	fibo obj;
	obj.fib1();
	return 0;
}