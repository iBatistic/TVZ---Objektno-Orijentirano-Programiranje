//============================================================================/
// Name          : question4.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question4 solution
//
// Compile
// g++ question4.C -o executables/question4
// Run
// ./executables/question4
//============================================================================/


#include <iostream>
using namespace std;

int fun1(int p) 
{
    ++p; // increment local copy of object
    return p++; 
    // p++ will increment the value of p,
    // but return the original value that i held before being incremented
}

int fun2(int &p)
{
    ++p; // increment argument (this is not local copy of object)
    return p++; // return value of p and than increment argument i.e. p
}

int main(void)
{
    int a = 1, b, c;
    // b and c have random number held in memory
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl; 
    
    b = fun1(a); 
    // c have random number what is in memory at that moment
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl; 
    
    c = fun2(b); 
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl; 

    cout<< a + b + c << endl; // 1 + 3 + 4;

    return 0;
}
