//============================================================================
// Name        : VJ-9_Priprema.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits.h>
#include "SortedList.h"
using namespace std;

int main() {
	SortedList <int> SortList;

	srand(time(0));
	int velicinaListe(50);

	while(velicinaListe--){
		int k = rand();
		SortList.insert(k);
	}


	cout << "Broj elementa: " << SortList.count() << endl;

	SortList.print(1,5);

	SortList.remove(4);
	SortList.remove(1);

	SortList.print(1,3);

	cout << "Broj elementa: " << SortList.count() << endl;

	int * pointer = SortList.find(3);
	int * pointer2 = SortList.find(33);

	//cout << "*Pointer: " << *pointer << endl;;
	cout << "NULL Pointer: " << pointer2 << endl;;

	SortList.print(1,3);
	cout << "Operator SortList[45]: " << SortList[45] << endl;


	cout << "Operator SortList[3]: " << SortList[3] << endl;
	cout << "Operator SortList[3]: " << SortList[8] << endl;

	SortList.print(1,50);

	return 0;
}
