#include<iostream>
using namespace std;
class store{
	int quantity=0;
	int price=0;
	int total=0;
	public:
		void getdata()
		{
			
		cout<< "quantity\t"  "price\t"  "total\t";
		cout<< "\n";
			cout<< quantity <<"\t\t" << price <<"\t\t" <<total;
		}
};


int main()
{
	store obj,obj2;
	obj.getdata();
}