#include<iostream>
using namespace std;
//default
int fun(int a=20,int b=30,int c=40)
{
	return a+b+c;
 } 
 
 int main()
 {
 	int x=2,y=3,z=4;
 	cout<<fun(x,y);
 }
 
 
 
 