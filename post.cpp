#include <iostream>
using namespace std;

class sum {
public:
    int x, y;
    sum(int a, int b) :x(a),y(b) {}
    sum operator++(int) // postfix ++
    {
        sum obj3(x, y);
        x++;
        y++;
        return obj3;
    }
    sum operator--(int) // postfix --
    {
        sum obj(x, y);
        x--;
        y--;
        return obj;
    }
    void display() {
        cout<<"\nvalue of X:"  <<x;
        cout<<"\nvalue of Y:"  <<y;
    }
};

int main() 
{
    sum ob1(100, 200), ob2(20, 450);
    sum ob3 = ob1++; // postfix ++
    //sum ob3 = ob2++; // postfix ++
    //sum ob3 = ob1--; // postfix --
    //sum ob3 = ob2--; // postfix --
    cout<<"\n" "BEFORE:-";
    ob3.display();
    cout<<"\n" "AFTER:-";
    ob1.display(); 
    
}
