/*
 * Bubble.h
 *
 *  Created on: May 29, 2018
 *      Author: ivan
 */

#ifndef BUBBLE_H_
#define BUBBLE_H_
#include <string>
#include <iostream>
#include <cmath>
using namespace std;


class Bubble {
private:
	string color;
	double r;

public:
	
	double V () const {
		return (4.0/3.0) * pow(r,3)*M_PI;
	}

	Bubble operator+(const Bubble& other) const
	{
		Bubble bubble;
		double Volume = V() + other.V();
		bubble.r = pow(((Volume*3)/(4 * M_PI)),1.0/3);
		if(V()> other.V()){
			bubble.color = color;
		}else{bubble.color = other.color;}
		return bubble;
	}

	Bubble operator-(const Bubble& other) const 
	{
			Bubble bubble;
			double Volume = abs( V() - other.V() );
			bubble.r = pow(((Volume*3)/(4 * M_PI)),1.0/3);
			bubble.color = color;
			return bubble;
	}

	bool operator==(const Bubble& other) const
	{
		if(color==other.color){
			if(abs(r-other.r) < 0.0001){
				return true;
		}else{
			return false;
		}
	}
	}

	Bubble() {};

	Bubble(string name, double radijus) 
	{
		color = name;
		r = radijus;
	};

	friend ostream& operator << (ostream& izlaz, Bubble B);
};

#endif /* BUBBLE_H_ */
