#include"Hash_map.h"

template<class k, class v>
Hash_map<k, v>::Hash_map(int size) :
	Overflow(size)
{
	items.resize(size);///////////////
	item
}
template<class k, class v>
v Hash_map<k, v>::operator[](k& key) {

	if (contains(key) == true) {
		return items.operator[key];//////////////////////
		 
		 
	}
}
template<class k, class v>
bool Hash_map<k,v>:: contains(k& key) {
	for (int i = 0; i < getsize(); i++)
	{
		if (items[i].get_first() == key)/////////////////
			return true;
	}
	return false;
}

template<class k, class v>
void Hash_map<k, v>::put(k& key, v& value) {

	if (contains(k) == true)
		throw(invalid_key);
		


	for (int i = 0; i< items.size;i++)
	{
		if (items[i] == 0) {
			items[i] = new Pair(k, v);
			return;
		}
		
	}


}
