#include<iostream>
using namespace std;
int main()
{
	int  i=0,		n ,sum=0;
	while(i<=6)
	{
	
	cout<<"enter any number" <<endl;
	cin>>n;
	if (n>=0){
	sum=sum+n;
	
}
	else
	{
	cout<<"negative number"<<endl;
	break;
	}
	i++;
    }
    
	cout<<"the sum = "<<sum;
	
}