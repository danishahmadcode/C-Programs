#include <iostream>
using namespace std;

class Mammal {                                                             //MAMMAL//      //ANIMAL//     
  public:                                                                         //      //
    Mammal() {                                                                     //    //
      cout << "Mammals can give direct birth." << endl;                             //   //
    }                                                                                // //
};                                                                                //BAT//

class Animal {
  public:
    Animal() {
      cout << "Winged animal can flap." << endl;
    }
};
void display()
		{
			cout<<"I HAVE BEEN INHERITED FROM BOTH CLASSES";
		}
class Bat: public Mammal, public Animal {
	public:
		display();
};

int main() {
   Bat b1;
   display();
    return 0;
}