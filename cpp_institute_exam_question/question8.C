//============================================================================/
// Name          : question8.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question8 solution
//
// Compile
// g++ question8.C -o executables/question8
// Run
// ./executables/question8
//============================================================================/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s = "Abc", t = "A";
    s = s + t; // AbcA
    t = t + s; // AAbcA
    
    int i = s.compare(t) > 0; //true = 1
    
    cout << "s: " << s << ", t: " << t << endl;
    
    cout << "s.compare(t): " << s.compare(t) << endl; 
    // Compare return interger value rather than Boolean value
    
    int j = s.length() < t.length(); // true = 1
    
    cout << i + j << endl;   
    
    
    return 0;
}
