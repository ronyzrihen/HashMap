#include"overflow.h"


Overflow::Overflow(int size) try:m_size(size) {

	if (size < 0) {
		throw Custom().invalid_index();
	}
}
catch (const int err) {

	cout << err << endl; 
	
}

bool Overflow::legal(int index) {
	if (index >= m_size)
		return false;
	return true;
}