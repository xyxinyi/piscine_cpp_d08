#include <string>
#include "Coconut.h"

Coconut::Coconut() : Fruit()
{
	this->_name = "coconut";
	this->_vitamins = 15;
}

Coconut::~Coconut()
{
}

std::string	Coconut::getName() const
{
	return (this->_name);
}
