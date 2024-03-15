#include<iostream>
using namespace std;
void ab(int &i=10,int &j=20)
{
	int &x=i;
	int &y=j;
	cout<<i<<j;
}
int main()
{
ab(20,10)
cout<<i<<j;
	return 0;
}