#include<iostream>
using namespace std;
class numbers{
	public:
	int x;
	int y;
	void sum()
	{
		cout<<x <<"" <<y;
	}
	numbers(int a,int b)
{
	a=x;
	b=y;
}
};

int main()
{
	numbers o1(1,2);
	o1.sum();
}
