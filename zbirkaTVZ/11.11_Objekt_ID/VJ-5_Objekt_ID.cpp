//============================================================================
// Name        : VJ-5_Objekt_ID.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <string>
#include "Objekt.h"
using namespace std;

int main(){
	Objekt obj1; // ID = 1, brojInstanci = 1
	Objekt niz[10]; // ID = 2..11, brojInstanci = 11
	Objekt* p = new Objekt[10]; 	// ID = 12..21, brojInstanci = 21
	delete[] p; // brojInstanci = 11!

	Objekt zadnji;
	cout << zadnji.ID << " " << Objekt::BrojInstanci() << endl; // 22 12

return 0;
}

