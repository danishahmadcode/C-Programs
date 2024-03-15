#include<iostream>
using namespace std;
int main()
{
	int i,n,n1,n2,n3;
	cout<<"enter limit";
	cin>>n;
	i=1;
	n1=0;
	n2=1;
	cout<<n1<<" "<<n2<<" ";
	do{
		n3=n1+n2;
		cout<<n3 <<" ";
		n1=n2;
		n2=n3;
		i++;
	}while(i<n);
	return 0;
}