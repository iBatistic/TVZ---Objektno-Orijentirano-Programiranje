//============================================================================/
// Name          : question16.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question16 solution
//
// Compile
// g++ question16.C -o executables/question16
// Run
// ./executables/question16
//============================================================================/

#include <iostream>

using namespace std;

class A 
{
public:
    static int a;
    A() { a++; }
};

int A::a = 1;

void f(void) 
{
    A a;
    throw string("?");
}


int main(void)
{
	A a; // empty contstructor increments a
    try{ f(); } // functionf f calls empty constructor wich again increment a
    catch (string& s){ }

    cout << A::a << endl;

     return 0;
}
