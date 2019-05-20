//============================================================================/
// Name          : question21.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question21 solution
//
// Compile
// g++ question21.C -o executables/question21
// Run
// ./executables/question21
//============================================================================/

#include <iostream>
using namespace std;

class A
{
public:
    int v;

    A() : v(1) {}
    A(int i) : v(i) {}

    void operator<=(int a) 
    {
         v *= a; 
    }

    friend ostream& operator<<(ostream& os, const A& a)
    {
        os << "Value of v is: " << a.v;
        return os;
    }
};

int main(void) {
    
    A i = 2;
    
    i <= 2;

    // i ** 2; operator ** can't be overloaded, compiler can't know is right
    // object pointer to object or what

    // without overloaded << cout broke compilation
    cout << i.v << endl;

    return 0;
}
