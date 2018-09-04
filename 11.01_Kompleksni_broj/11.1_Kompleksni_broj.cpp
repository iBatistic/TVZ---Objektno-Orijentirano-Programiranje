//============================================================================
// Name        : 1_Kompleksni_broj.cpp
// Author      : Ivan Batistic
// Version     : /
// Copyright   : /
// Description : Kompleksni broj [VJ-1]
//============================================================================

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Kompleksni {
private:
	double re;
	double im;

public:
	double getRe() {return re;}
	double getIm() {return im;}
	Kompleksni(double re, double im) : re(re), im(im) {}
	Kompleksni() {}
};

double Modul(Kompleksni T)
{
	return sqrt(pow(T.getRe(),2)+pow(T.getIm(),2));
};

void Sortiraj(Kompleksni* p, int n)
{
   for (int i = 0; i < n-1; i++)
   {
       for (int j = 0; j < n-i-1; j++)
	   {
    	   double left =
    			   sqrt(pow(p[j].getRe(),2)+pow(p[j].getIm(),2));
    	   double right =
    			   sqrt(pow(p[j+1].getRe(),2)+pow(p[j+1].getIm(),2));

	       if (left > right)
		   {
			   swap(p[j], p[j+1]);
		   }
	   }
    }
}

bool sortKompleksni (Kompleksni i,Kompleksni j)
{
	double I = Modul(i);
	double J = Modul(j);
	return (I<J);
}

int main() {

	int N;
	cout << "Unesi N: " << flush;
	cin >> N;

	Kompleksni *pKompleksni = new Kompleksni[N];

	for(int i(0); i < N; i++)
	{
		double re, im;
		cout << "niz[" << i << "].re = " << flush;
		cin >> re;
		cout << "niz[" << i << "].im = " << flush;
		cin >> im;
		pKompleksni[i] = Kompleksni(re,im);
	}

	Sortiraj(pKompleksni, N);

	for(int i(0); i < N; i++)
	{
		cout << "Z(" << pKompleksni[i].getRe() << flush;
		if(pKompleksni[i].getIm() > 0)
		cout << "+" << pKompleksni[i].getIm() << flush;
		else
		cout << pKompleksni[i].getIm() << flush;
		cout << ") Modul: " << Modul(pKompleksni[i]) << endl;
	}

	delete pKompleksni;

	// Upotreba vektora

	cout << "Unesi N: " << flush;
	cin >> N;

	vector<Kompleksni> kompleksni;
	kompleksni.reserve(N);

	for(int i(0); i < N; i++)
		{
			double re, im;
			cout << "niz[" << i << "].re = " << flush;
			cin >> re;
			cout << "niz[" << i << "].im = " << flush;
			cin >> im;
			kompleksni.push_back(Kompleksni(re,im));
		}

	sort(kompleksni.begin(), kompleksni.end(), sortKompleksni);

	for(int i(0); i < N; i++)
	{
		cout << "Z(" << kompleksni[i].getRe() << flush;
		if(kompleksni[i].getIm() > 0)
		cout << "+" << kompleksni[i].getIm() << flush;
		else
		cout << kompleksni[i].getIm() << flush;
		cout << ") Modul: " << Modul(kompleksni[i]) << endl;
	}

	return 0;
}
