#include <string>

#include "Lemon.h"

Lemon::Lemon() : Fruit()
{
  this->_name = "lemon";
  this->_vitamins = 3;
}

Lemon::~Lemon()
{
}

std::string	Lemon::getName() const
{
  return (this->_name);
}
