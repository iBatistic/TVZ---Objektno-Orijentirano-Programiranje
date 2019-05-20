//============================================================================/
// Name          : question17.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question17 solution
//
// Compile
// g++ question17.C -o executables/question17
// Run
// ./executables/question17
//============================================================================/

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void f(void) 
{
    throw domain_error("err");
}


int main(void)
{
    int a = 4;
    try { f(); }
    catch (runtime_error &e) //runtime is not domain !
    {
        a--;
    }
    catch (...) // catch bastard here
    {
        a++;
    }

    cout << a << endl;

     return 0;
}
