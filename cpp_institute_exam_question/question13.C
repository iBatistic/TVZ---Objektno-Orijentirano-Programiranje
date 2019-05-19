//============================================================================/
// Name          : question12.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question13 solution
//
// Compile
// g++ question13.C -o executables/question13
// Run
// ./executables/question13
//============================================================================/

#include <iostream>

using namespace std;

class A
{
public:
	int x;
	void d() {x /=2; }
};

class B : public A
{
public:
	int y;
	void d() { A::d(); }
};

int main(void)
{
	B b;
	b.x = b.y = 4;
	b.d();
	cout << b.y / b.x<< endl;
 
    return 0;
}
