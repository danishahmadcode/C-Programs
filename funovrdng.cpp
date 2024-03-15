#include <iostream>  
using namespace std;  
class A {  
    public:  
 virtual void display(){    
cout<<"HELLO"<<endl;;    
    }      
};   
class b: public A   
{    
 public:  
 void display()    
    {    
       cout<<"HI...";    
    }    
};  
int main(void) {  
A a,*aptr; 
   b d;  
   aptr=&d;
   aptr-> display();
   //a.display();  
   //d.display();  
   return 0;  
}  