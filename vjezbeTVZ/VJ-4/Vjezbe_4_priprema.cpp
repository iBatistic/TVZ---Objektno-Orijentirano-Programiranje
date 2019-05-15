//============================================================================
// Name        : Vjezbe_4_priprema.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Raketa.h"
using namespace std;

int main() {


  	string nazivRakete;
	double domet;
	cout << "Unesi naziv rakete i domet:" << endl;
	cin >> nazivRakete >> domet;
	Raketa r(nazivRakete, domet);
	string imeGrada, imeDrzave;
	cout << "Grad proizvodnje - Unesi ime grada i ime drzave:" << endl;
	cin >> imeGrada >> imeDrzave;
	Grad* g = new Grad(imeGrada, imeDrzave);
	r.setGradProizvodnje(*g);
	int brCiljeva;
	cout << "Unesi broj ciljeva:" << endl;
	cin >> brCiljeva;
	while (brCiljeva--) {
		cout << "Novi cilj - Unesi ime grada i ime drzave:" << endl;
		cin >> imeGrada >> imeDrzave;
		Grad* g = new Grad(imeGrada, imeDrzave);
		r.dodajCilj(g);
	}
	r.ispis();


	//Kod za testiranje kopirnog konstruktora i operatora pridruživanja
	return 0;
}
