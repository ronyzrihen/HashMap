#pragma once
#include <string>
#include<iostream>
#include<stdlib.h>
using namespace std;

template<class T1, class T2>
class Pair
{
public:
	Pair(T1,T2);
	~Pair();
public:
	T1& get_first();
	T2& get_second();
	Pair& operator =(Pair& source);
	void print();
	void put();
private:
	T1 m_first;
	T2 m_second;
};


template<class T1, class T2>
ostream& operator<< (ostream&out, const Pair<T1, T2>& source) {
	 source.print();
	 return out;
}
template<class T1, class T2>
istream& operator>> (istream& in, Pair<T1, T2>& source) {
	 source.put();
	 return in;
}