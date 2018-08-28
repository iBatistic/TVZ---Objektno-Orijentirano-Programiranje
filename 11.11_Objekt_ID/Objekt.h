/*
 * Objekt.h
 *
 *  Created on: May 30, 2018
 *      Author: ivan
 */

#ifndef OBJEKT_H_
#define OBJEKT_H_

class Objekt {
private:
	int id;
public:
	static int ID;
	static int brojInstanci;
	Objekt(){
		ID++;
		brojInstanci++;
	};
	~Objekt(){
		brojInstanci--;
	};
	static int BrojInstanci() {return brojInstanci;}
};

#endif /* OBJEKT_H_ */

