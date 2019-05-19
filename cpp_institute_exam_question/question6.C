//============================================================================/
// Name          : question4.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question6 solution
//
// Compile
// g++ question6.C -o executables/question6
// Run
// ./executables/question6
//============================================================================/


#include <iostream>
using namespace std;

char f1(char c)
{
    return c == 'z' ? 'a' : c + 1;
}

char f2(char& c)
{
    c = f1(c);
    return c;
}

int main(void)
{
    char x = 'x';

    cout << f2(x); // Go inside f2, call f1, x!=z, incrementing x get y
    cout << f2(x); // Go inside f2, call f1, x!=z, incrementing y get z
    cout << f2(x)<<endl; // Go inside f2, call f1, x=z, return a   

    return 0;
}
