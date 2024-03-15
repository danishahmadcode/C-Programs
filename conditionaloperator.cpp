#include<iostream>
using namespace std;
template<class T>

T abc (T x,T y)
{
	return x > y ? x :y;
}
int main()
{
	cout<<"the largest number of these two numbers is "<<abc<int>(6,9)<<endl;
		cout<<"the largest number of these two numbers is "<<abc<float>(6.4,5.8)<<endl;
			cout<<"the largest number of these two numbers is "<<abc<char>('f','h')<<endl;
}
