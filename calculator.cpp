#include<iostream>
using namespace std;

int main()
{
	char operation;
	cout<<"select the operator(+,-,/,*)";
	cin>>operation;
	
	double num1,num2,res;
	cout<<"enter the numbers: ";
	cin>>num1>>num2;
	switch (operation)
	{
		case '+':
			res = num1+num2;
			cout<<res;
			break;
			
		case '-':
			res = num1-num2;
			cout<<res;
			break;
			
		case '*':
			res = num1*num2;
			cout<<res;
			break;
			
		case '/':
			if (num2==0)
			   cout<<"its error , because division by 0 is not allowed"<<endl;
			else
				res = num1/num2;
				cout<<res;
			break;
		default:
			cout<<"it is the invalid operator";
			break;
	}
	return 0;
	
}
