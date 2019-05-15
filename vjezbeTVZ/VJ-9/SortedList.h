/*
 * SortedList.h
 *
 *  Created on: Aug 22, 2018
 *      Author: ivan
 */

#ifndef SORTEDLIST_H_
#define SORTEDLIST_H_

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class SortedList {
private:
	T* niz;
	int cnt;
	int capacity;

public:

	void insert(T item){
		if(cnt >= capacity){
			capacity *= 2;
			niz =(int*)realloc(niz,sizeof(T) * capacity);
		}
		niz[cnt++] = item;
		// sortiranje
		for(int i = 0; i < cnt ; i++)
		{
			int indeks(i);
			for(int k = i+1; k<cnt; k++)
			{
				if((niz[i] > niz[k]) & (niz[k] <= niz[indeks]))
				{
					indeks = k;
				}
			}
			T tmp = niz[i];
			niz[i] = niz[indeks];
			niz[indeks] = tmp;
		}

	};

	void remove(T item){
		for(int i = 0; i < cnt; i++)
		{
			if ( niz[i] == item)
			{
				int brojac(0);
				for(int c = i+1; c< cnt; c++)
				{
					niz[i+brojac] = niz[c];
					brojac++;
				}
				cnt--;
				break;
			}
		}
	}

	int count(){return cnt;};

	T& operator[](int index){
		return niz[index];
	};

	T* find(T item){
		for(int i = 0; i < cnt; i++){
			if(niz[i] == item){
				return &niz[i];
			}
		}
		return NULL;
	};

	void print(int start, int end){
		for(int i = start; i < (end+1); i++)
		{
			cout << niz[i-1] << " " << flush;
		}
		cout << endl;
	};

	SortedList(){
		cnt = 0;
		capacity = 5;
		niz =(int*)malloc(sizeof(T) * capacity);
	};

	~SortedList(){};
};

#endif /* SORTEDLIST_H_ */
