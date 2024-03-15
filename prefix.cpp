//UNARY OPERATOR:-
#include <iostream>
using namespace std;
class sum {
   public:
      int x, y;
   sum(int a, int b) :x(a),y(b)
   {
      
   }
   sum operator++()
    {
    	 sum obj3((x+1),(y+1));
    	 return obj3;
	}
	sum operator--()
    {
    	 sum obj3((x-1),(y-1));
    	 return obj3;
	}
	void display() {
      cout<<"\nvalue of X:"  <<x;
      cout<<"\nvalue of Y:"  <<y;
   }
};
   
    
   int main() 
   {
   sum  ob1(100,200), ob2(20,450);
     //sum ob3=++ob1;
     //sum ob3=++ob2;
      sum ob3=--ob1;
    // sum ob3=--ob2;
     ob3.display();
     ob1.display();
}