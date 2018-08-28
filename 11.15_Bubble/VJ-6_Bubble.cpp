//============================================================================
// Name        : VJ-6_Bubble.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bubble.h"
using namespace std;

ostream& operator <<(ostream& izlaz, Bubble B) {
	izlaz << "Bubble radijus: " << B.r << ", Bubble color " << B.color << endl;
	return izlaz;
}


int main() {

	Bubble a("blue", 10.4);
	Bubble b("red", 7.2);
	Bubble c("green", 18.8);

	cout << a << endl;
	Bubble x = a + b; //nastat će novi bubble obujma 6275.27
	cout << x; //blue: 11.44
	Bubble y = x + c;
	cout << y; 	//green: 20.12



	Bubble z = y - x;
	cout << z; //green: 18.8
	if (z == c)
	cout << "OK" << endl; //OK


	return 0;
}
