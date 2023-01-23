//
// Created by Rony Zrihen on 23/01/2023.
//
#pragma once
#include <string>
#include <iostream>
#include "OverFlowSizeCheck.h"
#include "Pair.h"
using namespace std;
template<class K, class V>
class HashMap{

public: // constructor distructors
HashMap(int size);
~HashMap();

public:
void put(K& key, V& value);
bool contains(K& key);

//operators
V operator[](K& key);
ostream& print(ostream& out);
private:
vector<Pair<K,V>> m_vector;
};

template<class K, class V>
ostream& operator <<(ostream& out, HashMap<K,V> Hash);