//============================================================================/
// Name          : question18.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question18 solution
//
// Compile
// g++ question18.C -o executables/question18
// Run
// ./executables/question18
//============================================================================/

#include <iostream>
#include <exception>

using namespace std;

int i = 1;

void f(void) 
{
    throw 1;
    i++;
}

void g(void)
{
    i++;
    try { f(); }
    catch (int &i)
    {
        throw ++i;
    }
}


int main(void)
{
    try { g(); i++; }  
    catch(...) { i++; } 
    cout<< i << endl;

    return 0;
}
