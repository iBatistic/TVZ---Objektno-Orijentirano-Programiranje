//============================================================================/
// Name          : question19.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question19 solution
//
// Compile
// g++ question19.C -o executables/question19
// Run
// ./executables/question19
//============================================================================/

#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

int i = 3;

class A : public runtime_error
{
    public: 
    A() : runtime_error("?") {cout<<"A() called" << endl;}
};

class B : public logic_error 
{
    public:
    B() : logic_error("!") {cout<<"B() called" << endl;}
};

void f(void) 
{
    i++;
    throw B();
    i++;
}

void g(void) 
{
    try { f(); } // f throws object B
    catch(A &a) { throw A(); } // here is not catched
}

int main(void) {
    try { g(); i++; } 
    catch(logic_error &l) { i++; cout<< "catched in logic_error" << endl;}
    catch(...) { i++; cout<< "catched in runtime_error" << endl;} 
    cout << i << endl;
    
    return 0;
}
