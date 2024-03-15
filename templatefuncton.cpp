#include<iostream>
using namespace std;
template<class T>

T add (T x,T y)
{
	T result= (x+y);
	return result;
}


int main()
{
	int i=9 , j=8;
	float n=7.5, m= 7.3;
	cout<<"the sum of two integer digits is :"<<add<int>(i,j)<<endl;
	cout<<"the sum of two float digits is :"<<add<float>(n,m);
	return 0;

}
