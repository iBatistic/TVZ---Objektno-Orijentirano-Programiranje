/*
 * Kompleksni.h
 *
 *  Created on: May 29, 2018
 *      Author: ivan
 */

#ifndef KOMPLEKSNI_H_
#define KOMPLEKSNI_H_
#include <iostream>
using namespace std;


class Kompleksni {
private:
	double re;
	double im;

public:
    Kompleksni operator+(Kompleksni c);

    Kompleksni operator*(Kompleksni c);

	const double Re() {return re;}

	const double Im() {return im;}

	void ispis();

	Kompleksni(double Re, double Im);

	Kompleksni(double Re) : re(Re) {im = 0;}

	Kompleksni();

	void setRe(double Re);

	void setIm(double Im);

	~Kompleksni();

	friend Kompleksni operator-(Kompleksni c, Kompleksni b)
	{
		Kompleksni result;
		result.re = c.re - b.re;
		result.im = c.im - b.im;
		return result;
	}

	friend ostream& operator << (ostream& izlaz, Kompleksni Z);

	Kompleksni& operator++()
	{
		re += 1;
		im += 1;
		return *this;
	}

	Kompleksni operator++(int)
	{
		Kompleksni rez(re, im);
		re += 1;
		im += 1;
	return rez;
	}
};

#endif /* KOMPLEKSNI_H_ */
