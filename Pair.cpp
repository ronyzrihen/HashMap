#include "Pair.h"




template<class T1, class T2>
Pair<T1,T2>::Pair(T1, T2):
	m_first(T1),
	m_second(T2)
{

}


template<class T1, class T2>
void Pair<T1,T2>::print() {
	 cout << "key: " << T1 << " " << "valeu: " << T2 << endl;
}

template<class T1, class T2>
void Pair<T1, T2>::put() {
	cout << "enter key: ";
	cin >> T1;
	cout << "enter value:";
	cin>> T2;

}