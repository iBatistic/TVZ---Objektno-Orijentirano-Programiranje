/*
 * Raketa.h
 *
 *  Created on: Aug 18, 2018
 *      Author: ivan
 */

#include <string>
#include <iostream>
#include <vector>
#include "Grad.h"
using namespace std;
class Raketa {
private:
	string naziv;
	double domet;
	Grad* gradProizvodnje;
	vector<Grad*> ciljevi;
public:
	Raketa(void);
	Raketa(string naziv, double domet);
	Raketa(const Raketa& other);
	Raketa& operator=(const Raketa& other);
	~Raketa(void);
	void setGradProizvodnje(Grad& grad);
	Grad* getGradProizvodnje();
    void dodajCilj(Grad* grad);
	Grad* dohvatiCilj(int index);
	int ukCiljeva();
	void ispis();
};
