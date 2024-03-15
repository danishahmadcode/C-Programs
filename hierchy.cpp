#include <iostream>
using namespace std;
class Animal {
   public:
    void info() {
        cout << "I am an animal." << endl;                               //ANIMAL//
                                                                         //   \\
    }                                                                   //     \\
};                                                                  // SNAKE   // CAT
class snake: public Animal{
public:
	void hish()
	{
        cout << "I am a snake. hish." << endl;
    }
};
class Cat : public Animal {
   public:
    void meow() {
        cout << "I am a Cat. Meow." << endl;
    }
};
int main(){

   snake s1;
    cout << "snake Class:" << endl;
    s1.info(); 
    s1.hish();
    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info();
    cat1.meow();
	return 0;
}
