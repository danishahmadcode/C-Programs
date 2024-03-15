#include <iostream>
using namespace std;
class sum {
   public:
      int x, y;
   sum(int a, int b) {
      x=a;
      y=b;
   }
   void display() {
      cout<<"\nvalue of X:"  <<x;
      cout<<"\nvalue of Y:"  <<y;
   }
   //add
   void operator+(sum &ob2)
   {
   	x=x+ob2.x;
   y=y+ob2.y;
   display();
   }
   //subtract
   void operator-(sum &ob2)
   {
   	x=x-ob2.x;
   y=y-ob2.y;
   display();
   }
   //multiply
   void operator*(sum &ob2)
   {
   	x=x*ob2.x;
   y=y*ob2.y;
   display();
   }
   //divide
   void operator/(sum &ob2)
   {
   	x=x/ob2.x;
   y=y/ob2.y;
   display();
   }
   //++
   void operator++()
   {
   	x=x++;
   	y=y++;
   display();
   }
};

int main() {
   sum ob1(100,200), ob2(20,450);
   //ob1.getdata(10,20);
   //ob2.getdata(20,30);
   ob1+ob2;
   ob1-ob2;
   ++ob1;
   //ob1/ob2;
   
}
