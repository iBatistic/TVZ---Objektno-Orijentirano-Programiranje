/*
 * Kompleksni.cpp
 *
 *  Created on: May 29, 2018
 *      Author: ivan
 */

#include "Kompleksni.h"
#include <iostream>
using namespace std;

void Kompleksni::ispis()
{
	if (this->im >= 0)
	{
		cout << this->re << "+" << this->im << "i" << endl;
	}
	else
	{
		cout << this->re << this->im << "i" << endl;
	}
};

Kompleksni::Kompleksni(double Re, double Im) {
	re = Re;
	im = Im;
};

Kompleksni::Kompleksni() {};

Kompleksni::~Kompleksni() {};

void Kompleksni::setRe(double Re)
{
	this->re = Re;
};

void Kompleksni::setIm(double Im)
{
	this->im = Im;
};

Kompleksni Kompleksni::operator+(Kompleksni c)
{
    Kompleksni result;
    result.re = re + c.re;
    result.im = im + c.im;
    return result;
}

Kompleksni Kompleksni::operator*(Kompleksni c)
{
    Kompleksni result;
    result.re = re*c.re - im*c.im;
    result.im = im*c.re + re*c.im;
    return result;
}




