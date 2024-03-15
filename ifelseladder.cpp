#include<iostream>
using namespace std;
int main()
{
int num;
cout<< "enter the number from 1 to 7"<<endl;
cin>>num;
	if(num==1)
	{
		cout<<"day is monday";
	}
	else if (num==2)
	{
		cout<<"day is tuesday";
	}
	else if (num==3)
	{
		cout<<"day is wednesday";
	}
	else if (num==4)
	{
		cout<<"day is thursday";
	}
	else if (num==5)
	{
		cout<<"day is friday";
	}
	else if (num==6)
	{
		cout<<"day is saturday";
	}
	else if (num==7)
	{
		cout<<"day is sunday";
	}
	else
	{
		cout<<"enter proper number";
	}
return 0;
}