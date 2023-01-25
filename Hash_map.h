#pragma once
#include <string>
#include<iostream>
#include<stdlib.h>
#include <vector>
#include"Pair.h"
#include"overflowsizecheck.h"
using namespace std;
 
template<class k, class v>
class Hash_map :public Overflow
{
public:
	Hash_map( int size);
	~Hash_map();

public:
	void put(k& key, v& value);
	bool contains(k& key);
	v operator[](k& key);
	void print();
private:
	vector<Pair<k, v>>items;
};

template<class k, class v>
ostream& operator<<(ostream& out, const Hash_map<k,v>&source);