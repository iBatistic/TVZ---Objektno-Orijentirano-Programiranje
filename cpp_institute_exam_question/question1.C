//============================================================================/
// Name          : question1.C
// Author        : Ivan Batistic
// Version       : 1.0
// Decription    : question1 solution
//
// Compile
// g++ question1.C -o executables/question1
// Run
// ./question1
//============================================================================/


#include <iostream>
using namespace std;

bool f() { cout << "f" << endl; return false; }
bool g() { cout << "g"<< endl; return true; }

int main(void)
{
    int i = 1, j = 1;
	
    if(i > j && j > i)
		i++;
    cout<< "i,j: " << i << ", " << j << endl; //1,1
	
    if(i > j || j > i)
		j++;
    cout<< "i,j: " << i << ", " << j << endl; //1,1
	
    if(i | j)
	i++;
    cout<< "i,j: " << i << ", " << j << endl; //2,1
	
    if(i & j)
	j++;
    cout<< "i,j: " << i << ", " << j << endl; //2,1
	
    cout<< "i*j: " << i*j << endl; //2
	
    if( f() && g() ){};
    cout<<"First if finished" << endl;
    
    if( f() & g()) {};
    cout<<"Second if finished" << endl;

    // DIference between & and && is that && not evaluate second condition if
    // first is false. & evaluates both conditions
	
    return 0;
}
