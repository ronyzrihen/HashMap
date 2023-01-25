#include"overflowsizecheck.h"


Overflow::Overflow(int size) :m_size(size) {

	if(size<0)
		throw (invalid_argument);
}

bool Overflow::legal(int index) {
	if (index >= m_size)
		return false;
	return true;
}
