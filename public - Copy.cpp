#include<iostream>
using namespace std;

class student
{
    private:
        int rollnmbr,phnnmbr;
    public:
        string name;
        void data(int a1, int b1); // Declaration
        void output(){
        	cout<<"The name  of student is "<<name;
            cout<<"\nROLLNUMBER of " <<name<<" is "<<rollnmbr;
            cout<<"\nPhonenmbr  of "<<name<< " is " <<phnnmbr;
            
            
        }
};

void student :: data(int a1, int b1){
    rollnmbr = a1;
    phnnmbr = b1;
}

int main(){
   student details;
    // details.a = 134;
    details.name = "ummer";
     details.data(21770022,7006760);
     details.output();
    return 0;
}
