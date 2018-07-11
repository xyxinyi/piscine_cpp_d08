#include <string>
#include "Banana.h"

Banana::Banana() : Fruit()
{
	this->_name = "banana";
	this->_vitamins = 5;
}

Banana::~Banana()
{
}

std::string	Banana::getName() const
{
	return (this->_name);
}
