#pragma once
#include <string>
#include<iostream>
#include<stdlib.h>

using namespace std;
class Custom : public exception
{
public:
	Custom(){};
	~Custom(){};
public:
	string invalid_index() { return "Invalid index"; };
	string invalid_key() { return "Invalid key"; };
private:


}

;
