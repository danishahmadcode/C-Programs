//inline
#include<iostream>
using namespace std;
 inline int fun2(int v=20,int g=30,int l=60)
{
	return v+g+l;
 } 
 int main()
 {
 	int d=2,e=3,f=4;
 	cout<<fun2(d,e);
 }