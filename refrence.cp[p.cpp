#include<iostream>
//refrence
using namespace std;
int main()
{
	int x=10;
//	int y=x;
	int &y=x;
	y=y+1;
	cout<<x;
}