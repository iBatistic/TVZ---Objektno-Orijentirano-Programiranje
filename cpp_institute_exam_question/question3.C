//============================================================================/
// Name          : question2.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question3 solution
//
// Compile
// g++ question3.C -o executables/question3
// Run
// ./executables/question3
//============================================================================/


#include <iostream>
using namespace std;

int main(void)
{
    int t[4] = { 8, 4, 2, 1 };
    // t = 0x7e9f0064 adress of first element, t[0] = 8 = *t
    int *p1 = t + 2; //=2 t is showing on first adress, t+1 on second ...
    int *p2 = p1 - 1;  //=4

    p1++; //=1
    //t[p1-p2]adress of last - adress of second = adress of third
    cout << p1-p2 << endl; //=2 difference between adresses
    cout << *p1 - t[p1-p2] << endl; 

    int *P1 = t ; 
    int *P2 = t + 1;
    int *P3 = t + 2;
    int *P4 = t + 3;

    // Adresses
    cout << P1 << endl << P2 << endl << P3 << endl << P4 << endl;	

    cout << *P4-*P3 << endl; // display difference between values
    cout <<  P4-P3 << endl; // display values between pointer adress = 1

    return 0;
}
