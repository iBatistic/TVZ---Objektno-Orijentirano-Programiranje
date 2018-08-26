/*
 * Student.h
 *
 *  Created on: Aug 26, 2018
 *      Author: ivan
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
	string ime;
	string oib;

public:

	Student(string ime, string oib) : ime(ime), oib(oib) {};

	virtual ~Student(){};

	// Potreban je prazan konstruktor zbog konstruktora u Bodovi.h
	// gdje se prvo kreira student sa praznim konstruktorom, a zatim
	// mu se pridodaje Student kreiran pomocu punog konstruktora u main.cpp

	Student(){};

	string getIme() {return ime;};

	string getOib() {return oib;};

};

#endif /* STUDENT_H_ */
