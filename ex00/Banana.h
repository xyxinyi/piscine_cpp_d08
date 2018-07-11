#ifndef __BANANA_H__
#define __BANANA_H__

#include <string>
#include "Fruit.h"

class Banana : public Fruit
{
public:
	Banana();
	~Banana();

	std::string getName() const;
};

#endif
