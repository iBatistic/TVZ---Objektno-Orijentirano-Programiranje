//============================================================================/
// Name          : question20.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question20 solution
//
// Compile
// g++ question20.C -o executables/question20
// Run
// ./executables/question20
//============================================================================/

#include <iostream>
using namespace std;

class A
{
public:
    int v;

    A() : v(1) {}
    A(int i) : v(i) {}

    void operator&&(int a) 
    {
         v = -v; 
    }

    friend ostream& operator<<(ostream& os, const A& a)
    {
        os << "Value of v is: " << a.v;
        return os;
    }
};

int main(void) {
    
    A i = 2;
    
    i && 2;

    // without overloaded << cout broke compilation
    cout << i << endl;

    return 0;
}
