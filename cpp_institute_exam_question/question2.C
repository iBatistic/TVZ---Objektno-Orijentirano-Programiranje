//============================================================================/
// Name          : question2.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question2 solution
//
// Compile
// g++ question2.C -o executables/question2
// Run
// ./executables/question2
//============================================================================/


#include <iostream>
using namespace std;

struct A
{
    // Public:
    int a;
    float b;
};

struct B
{
    // Public:
    int b;
    float a;
};

struct C
{
    // Public:
    A a;
    B b;
};

int main(void)
{
    // Aggregate initialization (initialization in form of list)
    C c1 = {1, 2, 3, 4};
    C c2 = {5, 6, 7, 8};

    // Each direct public base, (since C++17) array element, or non-static class 
    // member, in order of array subscript/appearance in the class definition, 
    // is copy-initialized from the corresponding clause of the initializer list

    // Note: members a and b are in different initialization order in A and B!
    cout<< c1.a.a << ", " << c1.a.b 
        << ", " << c1.b.a << ", " << c1.b.b << endl;

    cout<< c1.b.a + c2.a.b << endl;
	
    return 0;
}
