#pragma once
#include <string>
#include<iostream>
#include<stdlib.h>
#include"Hash_map.h"
using namespace std;

class Overflow 
{
public:
	Overflow(int size);
	~Overflow();
public:
	bool legal(int index);
	void setsize(int size) { m_size = size; };
	int getsize() { return m_size; };
private:
	int m_size;
};
