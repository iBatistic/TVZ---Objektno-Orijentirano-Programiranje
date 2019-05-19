//============================================================================/
// Name          : question14.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question14 solution
//
// Compile
// g++ question14.C -o executables/question14
// Run
// ./executables/question14
//============================================================================/

#include <iostream>

using namespace std;

class A
{
	public:
	int work(void) {return 4;}
};

class B : public A
{
	public:
	int relax(void) { return 2; }
};

class C : public A
{
	public: 
	int relax(void) {return 1;}
};

int main(void)
{
	A *a0 = new A, *a1 = new B, *a2 = new C;
	cout << a0->work() + static_cast<C*>(a2)->relax() 
	     / static_cast<B*>(a1)->relax() << endl;
 
    return 0;
}
