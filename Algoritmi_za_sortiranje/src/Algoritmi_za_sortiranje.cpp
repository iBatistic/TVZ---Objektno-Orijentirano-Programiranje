//============================================================================
// Name        : Algoritmi_za_sortiranje.cpp
// Author      : Ivan Batistic
// Version     :
// Copyright   : /
// Description : Algoritmi za sortiranje jednodimezijske liste,
//				 testiranje brzine
//============================================================================

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Bubble sort, array passed by pointer (to avoid copy & return)
void bubbleSort(long *pointerBS,const long& size){
	int tmp;
	for(long i(0); i<size; i++)
	{
		for(long j(0); j<(size-1); j++)
		{
			if(*(pointerBS+i) > *(pointerBS+j))
			{
				tmp = *(pointerBS+i);
				*(pointerBS+i) = *(pointerBS+j);
				*(pointerBS+j) = tmp;
			}
		}
	}
}

// Insertion sort, array passed by pointer (to avoid copy & return)
void insertionSort(long *pointerIS,const long& size){
	long temp,j;
	for(long i(1); i<size; i++)
	{
		j = i;
		temp = *(pointerIS+j);
		while((j>0) && (temp < *(pointerIS+j-1)))
		{
			*(pointerIS+j) = *(pointerIS+j-1);
			j--;
		}
		*(pointerIS+j) = temp;
	}
}

// Quick sort
long podjeli(long niz[], int p, int q)
{
	long x = niz[p];
	int i = p,j;
	for (j = p+1; j<q; j++)
	{
		if(niz[j] <= x)
		{
			i++;
			int temp = niz[i];
			niz[i] = niz[j];
			niz[j] = temp;
		}
	}
	int temp = niz[i];
	niz[i] = niz[p];
	niz[p] = temp;
	return i;
}

void quick_sort(long niz[], int p, int q) {
	int r;
	if (p<q)
	{
		r = podjeli(niz, p, q);
		quick_sort(niz, p, r);
		quick_sort(niz, r + 1, q);
	}
}

int main() {

	long max = 100000;

	long nizBrojevaBS[max];
	long nizBrojevaIS[max];
	long nizBrojevaQS[max];

	srand(time(NULL));
	rand();
	for(long i(0); i < max; i++)
	{
		nizBrojevaBS[i] = rand() + 1;
		nizBrojevaIS[i] = nizBrojevaBS[i];
		nizBrojevaQS[i] = nizBrojevaBS[i];
	}

	long *pointerBS = nizBrojevaBS;
	long *pointerIS = nizBrojevaIS;

	clock_t t1 = clock();
	bubbleSort(pointerBS, max);
	clock_t t2 = clock();
	cout << "Vrijeme sortiranja (bubbleSort): " << (t2 - t1) / double(CLOCKS_PER_SEC) << " sek\n";

	t1 = clock();
	insertionSort(pointerIS, max);
	t2 = clock();
	cout << "Vrijeme sortiranja (insertionSort): " << (t2 - t1) / double(CLOCKS_PER_SEC) << " sek\n";


	t1 = clock();
	quick_sort(nizBrojevaQS, 0, max);
	t2 = clock();
	cout << "Vrijeme sortiranja (quickSort): " << (t2 - t1) / double(CLOCKS_PER_SEC) << " sek\n";

	return 0;
}
