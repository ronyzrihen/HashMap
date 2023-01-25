#pragma once
#include <string>
#include<iostream>
#include<stdlib.h>
namespace string_err {

class Custom
{
public:
	Custom();
	~Custom();
public:
	std::string invalid_index();
	std::string invalid_key();
private:

};
}


