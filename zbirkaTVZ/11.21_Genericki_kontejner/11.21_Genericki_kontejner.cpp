//============================================================================
// Name        : 21_Genericki_kontejner.cpp
// Author      : Ivan Batistic
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Polje.h"
using namespace std;

int main() {

	Polje<int> A(100);
	// inicijalizacija elemenata slučajnim vrijednostima 1-100
	srand((unsigned) time(NULL));
	for (int i = 0; i < 100; i++)
		A[i] = rand() % 100 + 1; // A.polje[i] ...

	// ispiši broj elemenata
	cout << "Polje ima " << A.BrElem << " elemenata " << endl;

	// da li se u polju nalazi broj x?
	int x = 58;
	int indeks = A.Sadrzi(x);
	if (indeks != -1)
		cout << "Broj " << x << " se nalazi u elementu s indeksom " << indeks << "!\n";
	else
		cout << "Broj " << x << " se ne nalazi u polju!\n";

	return 0;
}
