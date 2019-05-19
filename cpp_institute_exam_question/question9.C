//============================================================================/
// Name          : question8.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question9 solution
//
// Compile
// g++ question9.C -o executables/question9
// Run
// ./executables/question9
//============================================================================/

#include <iostream>
#include <string>
using namespace std;

namespace alpha { int var = 1; }
namespace beta { int var = alpha::var + 1;}

int main(void)
{
    beta::var += alpha::var;
    {
		using namespace beta;		
		cout << var << endl;
	}
    
    return 0;
}
