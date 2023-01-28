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
	Pair(const Pair& source){
		m_first = source.m_first;
		m_second = source.m_second;
	};
	~Pair(){};
public:
	void set_first(T1 first) { m_first = first; };
	void set_second(T2 second) { m_second = second; };
	const T1& get_first() const { return m_first; };
	T2& get_second() { return m_second; };
	Pair& operator =(Pair& source) { return *this; };

	void print(ostream& out) {
	
			out << "key: " << m_first << " " << "valeu: " << m_second << endl;
		
	};
	void put(istream& in) {
		cout << "enter key: ";
		in >> m_first;
		cout << "enter value:";
		in >> m_second;

	};
private:
	T1 m_first;
	T2 m_second;
};


template<class T1, class T2>
ostream& operator<< (ostream&out,  Pair<T1, T2>& source) {
	 source.print(out);
	 return out;
}
template<class T1, class T2>
istream& operator>> (istream& in, Pair<T1, T2>& source) {
	 source.put(in);
	 return in;
}