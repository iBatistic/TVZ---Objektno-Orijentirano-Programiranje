//============================================================================/
// Name          : question22.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question22 solution
//
// Compile
// g++ question22.C -o executables/question22
// Run
// ./executables/question22
//============================================================================/

#include <iostream>
using namespace std;

enum e {a=1,b,c,d};

e& operator--(e &x)
{
    x = b;
    return x;
}

int main(void) {
    
    e f = c;
    cout << int(f--) << endl;    
    return 0;
}
