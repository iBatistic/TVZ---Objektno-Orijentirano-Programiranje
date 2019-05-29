// template-variable.cpp by Bill Weinman <http://bw.org/>
// created 2018-09-08
#include <iostream>
using namespace std;

template<typename T>
T pi = T(3.1415926535897932385L);

int main()
{
    cout.precision(20);
    cout << pi<double> << endl;
    return 0;
}
