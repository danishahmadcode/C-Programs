#include<iostream>
using namespace std;
class abc{
	
	int rollnmbr;
	char name[30];
	public:
		void putdata();
		void getdata();
	
};
void abc::putdata()
{
	cout<< "enter rollnmbr \n";
	cin>>rollnmbr;
	cout<< "enter name \n";
	cin>>name;
}
void abc::getdata()
{
	cout<<rollnmbr<< " ";
	cout<<name <<" ";
}
int main()
{
	int i,n;
	abc obj[5];
	cout<<"enter no. of students";
	cin>>n;
	for(i=0;i<n;i++)
	{
		obj[i].putdata();
	}
	cout<<"THE DETAILS OF STUDENTS ARE AS:- \n";
	for(i=0;i<n;i++)
	{
		obj[i].getdata();
		cout<<endl;
	}
}