#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"enter choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"monday";
			break;
		case 2:
			cout<<"tuesday";
				break;
		case 3:
			cout<<"wednesday";
				break;
		case 4:
			cout<<"hursday";
				break;
		case 5:
			cout<<"friday";
				break;
		case 6:
			cout<<"saturday";
				break;
		case 7:
			cout<<"sunday";
				break;
		default:
				cout<<"enter proper choice";
					break;
	}
}