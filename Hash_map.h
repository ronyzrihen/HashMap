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
		items(vector<Pair<k, v>>(0))
	{
		
	};
	~Hash_map(){};

public:
	
	void put(k& key, v& value)
	{
		if (contains(key) == true)
			throw Custom().invalid_key();

		if (getsize() <= items.size())
			setsize(5);

		Pair<k,v>* new_p=new Pair<k,v>(key,static_cast<v>(value));
		
		
	
		items.push_back(*new_p);
		
		
	}
	template<class k>
	bool contains(k& key) {
		for (int i = 0; i < items.size(); i++)
		{
			if (items[i].get_first() == key)/////////////////
				return true;
		}
		return false;
	}
	 v operator[](k& key) {
		
			
		for (int i = 0; i < items.size(); i++) {
			if (items[i].get_first() == key) {
				cout << "the Value in location " << key << " is: ";
				return items[i].get_second();
			}
		}
		throw Custom().invalid_key();

	};
	
	void print(ostream& out) {
		for (int i = 0; i < items.size(); i++)
		{
			out << items[i].get_first() << " " << items[i].get_second()<<endl;
		}
	};
	
private:

	vector<Pair<k, v>>  items;
};

template<class k, class v>
ostream& operator<<(ostream& out, Hash_map<k, v>& source) {
	source.print(out);
	return out;
}



