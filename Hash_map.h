#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Pair.h"
#include "overflow.h"
#include "custom_exceptions.h"
using namespace std;
 

template<class k, class v>
class Hash_map :public Overflow
{
public:
	Hash_map(int size) :
		Overflow(size),
		items(vector<Pair<k, v>>(size))
	{}

	//~Hash_map();

public:
	
	void put(k& key, v& value)
	{
		if (contains(key) == true)
			throw Custom();

		if (getsize() == items.max_size())
			setsize(5);

		Pair<k,v> new_p();
		
	
		items.push_back(new_p);


	}
	template<class k>
	bool contains(k& key) {
		for (int i = 0; i < getsize(); i++)
		{
			if (items[i].get_first() == key)/////////////////
				return true;
		}
		return false;
	}
	//v operator[](k& key);
	
	void print(ostream& out) {
		for (int i = 0; i < getsize(); i++)
		{
			out << items[i].get_first() << " " << items[i].get_second();
		}
	};
	
private:

	vector<Pair<k, v>>  items;
};

template<class k, class v>
ostream& operator<<(ostream& out, const Hash_map<k,v>&source);



