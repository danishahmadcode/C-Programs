#include<iostream>
using namespace std;
class fibo{
	public:
	int f1=0,f2=1,f3,num,i=0;
	void limit()
	{
		cout<<"enter limit";
		cin>>num;
	}
	//cout<<f1<<" "<<f2<<" ";
	void fib1()
	{
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
{
	fibo obj;
	obj.limit();
	obj.fib1();
	return 0;
}
