/*
 * Raketa.cpp
 *
 *  Created on: Aug 18, 2018
 *      Author: ivan
 */

#include "Raketa.h"

Raketa::Raketa() {};

Raketa::~Raketa() {
	delete gradProizvodnje;
	for (unsigned int i=0; i<ciljevi.size(); i++)
		delete ciljevi[i];
};

Raketa::Raketa(string naziv, double domet) : naziv(naziv), domet(domet) {
	gradProizvodnje = NULL;
};

Raketa::Raketa(const Raketa &other){
	naziv = other.naziv;
	domet = other.domet;
	gradProizvodnje = new Grad(other.gradProizvodnje->getNaziv(), other.gradProizvodnje->getDrzava());
	for (vector< Grad* >::iterator it = ciljevi.begin() ; it != ciljevi.end(); ++it)
    {
	     delete (*it);
	}
	ciljevi.clear();
	for (unsigned int i=0; i<other.ciljevi.size(); i++)
	{
			Grad *tmp = new Grad(other.ciljevi[i]->getNaziv(), other.ciljevi[i]->getDrzava());
	        ciljevi.push_back(tmp);
	}
};

Raketa& Raketa::operator= (const Raketa& other){
	if (this != &other){
		naziv = other.naziv;
		domet = other.domet;
		gradProizvodnje = new Grad(other.gradProizvodnje->getNaziv(), other.gradProizvodnje->getDrzava());
		for (vector< Grad* >::iterator it = ciljevi.begin() ; it != ciljevi.end(); ++it)
	    {
		     delete (*it);
		}
		ciljevi.clear();
		for (unsigned int i=0; i<other.ciljevi.size(); i++)
		{
				Grad *tmp = new Grad(other.ciljevi[i]->getNaziv(), other.ciljevi[i]->getDrzava());
		        ciljevi.push_back(tmp);
		}
	}
	return *this;
};

void Raketa::setGradProizvodnje(Grad & grad){
	this->gradProizvodnje = &grad;
};


Grad* Raketa::getGradProizvodnje() {
	return this->gradProizvodnje;
};

void Raketa::dodajCilj(Grad* grad){
	this->ciljevi.push_back(grad);
};

Grad* Raketa::dohvatiCilj(int index){
	return ciljevi[index];
};

int Raketa::ukCiljeva() {
	return ciljevi.size();
};

void Raketa::ispis() {
	cout << "RAKETA->  naziv: " << naziv << ", domet: " << domet << ", gradProizvodnje: "
			<< gradProizvodnje->getNaziv() << ", " << gradProizvodnje->getDrzava() << endl;
	for(unsigned int i=0; i<ciljevi.size() ;i++){
	cout << "CILJ->  naziv: " << ciljevi[i]->getNaziv() << ", drzava: " << ciljevi[i]->getDrzava() << endl;
	cout << &naziv << "   " << &domet << "   " << &gradProizvodnje << "   " << &ciljevi << "\n" << endl;}
};







