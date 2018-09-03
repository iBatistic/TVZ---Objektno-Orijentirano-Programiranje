/*
 * Polje.h
 *
 *  Created on: Sep 3, 2018
 *      Author: ivan
 */

#ifndef POLJE_H_
#define POLJE_H_

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class Polje {
private:
	T* niz;

public:
	int BrElem;

	int Sadrzi(T item)
	{
		for(int i(0); i<BrElem; i++)
		{
			if (niz[i] == item)
				return i;
		}

		return -1;
	};

	T& operator[](int index)
	{
		return niz[index];
	};

	Polje(int BrElem) : BrElem(BrElem)
	{
		niz =(int*)malloc(sizeof(T) * BrElem);
	};
};

#endif /* POLJE_H_ */
