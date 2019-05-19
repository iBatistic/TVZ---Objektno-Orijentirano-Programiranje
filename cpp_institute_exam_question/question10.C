//============================================================================/
// Name          : question10.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question10 solution
//
// Compile
// g++ question9.C -o executables/question10
// Run
// ./executables/question10
//============================================================================/

#include <iostream>

using namespace std;

class A 
{
	int a;
	public:
	A(void) {a = 1;}
	int b(void) {return ++a;}; 
	//++a will first increment and return incremented value 
};

int main(void)
{
    A a;
    a.b();
    cout << a.b() << endl;
    return 0;
}
