#ifndef __FRUIT_H__
#define __FRUIT_H__

#include <string>

class Fruit
{
 protected:
	int _vitamins;
	std::string _name;

 public:
	Fruit();
	virtual ~Fruit();

	virtual std::string getName() const = 0;
	int getVitamins() const;
	void setVitamins(int);
};

#endif
