//============================================================================/
// Name          : question4.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question5 solution
//
// Compile
// g++ question5.C -o executables/question5
// Run
// ./executables/question5
//============================================================================/


#include <iostream>
using namespace std;

int *fun(void)
{
    return new int[2];
}

int fun(int* p)
{
    delete [] p;
    return 0;
}

void fun(int* p, int q)
{
    p[q] *= 2;
}

void fun(int* p, int q, int r)
{
    p[q] = r;
}

int main(void)
{
    int* v = fun(); // Pointer to function
    cout << *v << ", " << v << ", " << v[0] << ", " << v[1] << endl;

    fun(v,0,1); // Set first element to 1
    cout << *v << ", " << v << endl;

    fun(v,0,2); // Set first element to 2
    cout << *v << ", " << v << endl;

    fun(v,0); // Multiply first element by 2
    cout << *v << ", " << v << endl;

    // 4 + 0 = 4, second element iz zero from begining
    cout << v[1] + v[0] << endl; 

    // Delete pointer, return zero
    fun(v);

    cout << *v << ", " << v << endl;
    
    return 0;
}
