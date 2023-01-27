#pragma once
#include <string>
#include<iostream>
#include<stdlib.h>
using namespace std;

template<class T1, class T2>
class Pair
{
public:
	Pair(T1 first, T2 second) : m_first(first),
		m_second(second)
	{};
	Pair() {};
	Pair(const Pair& source){};
	~Pair(){};
public:
	void set_first()
	const T1& get_first() const { return m_first; };
	T2& get_second() { return m_second; };
	Pair& operator =(Pair& source) { return *this; };

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