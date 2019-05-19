//============================================================================/
// Name          : question4.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question7 solution
//
// Compile
// g++ question7.C -o executables/question7
// Run
// ./executables/question7
//============================================================================/


#include <iostream>
using namespace std;

int main(void)
{
    int *t[2] = {new int[2], new int[2] };

    for (int i = 0; i < 4; i++)
    {
        t[i % 2][i / 2] = i;
        
        cout << "t[" << i % 2 << ","
             << i / 2 << "] = " << i << endl;
    }
    
    cout << t[0][1] + t[1][0] << endl;
    delete [] t[0];
    delete [] t[1];

    // / operator on interger ommit decimals (0.2->0)
    // % operator decimals turns into int value (0.2->1)

    return 0;
}
