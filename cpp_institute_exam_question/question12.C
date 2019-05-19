//============================================================================/
// Name          : question12.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question12 solution
//
// Compile
// g++ question12.C -o executables/question12
// Run
// ./executables/question12
//============================================================================/

#include <iostream>

using namespace std;

class A
{
public:
	int a;
	A() { a = 0; }
	A(int b) { a = b + 1; }
};

class B
{
public:
	A a;
	B() : a(0) {}
};

int main(void)
{
	B *b = new B();
	cout << b->a.a << endl;
 
    return 0;
}
