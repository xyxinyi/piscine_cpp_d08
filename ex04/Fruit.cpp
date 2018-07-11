#include <string>
#include "Fruit.h"

Fruit::Fruit()
{
}

Fruit::~Fruit()
{
}

int	Fruit::getVitamins() const
{
	return (this->_vitamins);
}

void Fruit::setVitamins(int vita)
{
	this->_vitamins = vita;
}
