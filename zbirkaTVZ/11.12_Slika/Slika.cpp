/*
 * Slika.cpp
 *
 *  Created on: May 30, 2018
 *      Author: ivan
 */

#include "Slika.h"

Slika::Slika() {}

Slika::Slika(double P)
{
    price = P;
    nb++;
    priceTotal = priceTotal + P;
}

int Slika::nb = 0;

double Slika::priceTotal = 0;

double Slika::ProsjecnaCijena()
{
    return (Slika::priceTotal)/(Slika::nb);
}


