#include"overflow.h"


Overflow::Overflow(int size) :m_size(size) {

	if (size < 0)
		throw Custom();
}

bool Overflow::legal(int index) {
	if (index >= m_size)
		return false;
	return true;
}
