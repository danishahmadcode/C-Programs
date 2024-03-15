#include <iostream>
using namespace std;
class fibo{
	private:
		int n, t1 = 1, t2 = 0, next = 0;
	public:
	void fun(){
		

    	cout << "Enter the number of terms: ";
    	cin >> n;

    	cout << "fibonachi series: ";

    	for (int i = 1; i <= n; ++i) {
//        	if(i == 1) {
//            	cout << t1 << " ";
//            	continue;
//            }
//        	if(i == 2) {
//            	cout << t2 << ", ";
//            	continue;
//        	}
        	cout << next << ", ";
        	next = t1 + t2;
        	t1 = t2;
        	t2 = next;
        
    }
}
		
};
int main(){
	fibo obj;
	obj.fun();
	return 0;
}