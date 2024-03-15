#include<iostream>
using namespace std;

int main()
{
	int max,obt;
	cout<<"welcome to my code"<<endl;
	cout<<"claculate the percentage"<<endl;
	cout<<"enter the maximum mark: ";
	cin>>max;
	cout<<"enter the obtained mark: ";
	cin>>obt;
	try
	{
		if (max==0)
		{
			throw 11;
		}
		else
		{
		   float perc = (obt*100 / max);
            cout<<"the percentage is: "<<float(perc)<<"%"<<endl<<endl;	
		}
	}
	catch(...)
	{
		   
	cout<<"some error "<<endl<<endl;
	}

	
	
	cout<<"calculate the power"<<endl;
	int num,pow;
	cout<<"enter the number:";
	cin>>num;
	cout<<"enter the power";
	cin>>pow;
	int res=1;
	for(int i=0;i < pow;i++)
	{
		res= res*num;
	}	
	cout<<"the result is :"<<res<<endl;
	
	
	
}
