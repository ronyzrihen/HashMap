//
// Created by Rony Zrihen on 23/01/2023.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;
template<class T1, class T2>
class Pair{

public:

    //getters
    T1& get_first(){return m_first;};
    T2& get_second(){return m_second;};

    //operators
    Pair& operator=(const Pair& source);
    ostream& print(ostream& out);

private:
    T1 m_first;
    T2 m_second;

};

template <class T1, class T2>
ostream& operator <<(ostream& out, Pair<T1,T2> &source);
template <class T1, class T2>
istream& operator >> (istream& in, Pair<T1,T2> &source);