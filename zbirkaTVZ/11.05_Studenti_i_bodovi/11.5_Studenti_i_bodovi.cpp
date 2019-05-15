//============================================================================
// Name        : 5_Studenti_i_bodovi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Bodovi.h"
#include "Kolegij.h"
using namespace std;

int main() {
	// Mora se koristiti -std=c++11
	vector < Bodovi	> OOPBodovi {
			Bodovi(Student("Ivana Ivic", "0246002475"), 20),
			Bodovi(Student("Ivica Ivanovic", "0246005654"), 25),
			Bodovi(Student("Marko Markic", "0246004234"), 32)
	};
	Kolegij OOP("Objektno orijentirano programiranje", OOPBodovi);
	/* Preko objekta OOP ispišite bodove svih studenata tog kolegija počevši od
	 onih s najmanjim brojem bodova prema većim. Npr.;
	 Objektno orijentirano programiranje bodovi:
	 Ivica Ivanovic  0246005654      20
	 Ivana Ivic	     0246002475      25
	 Marko Markic    0246004234  	 32
	 */
	return 0;
}
