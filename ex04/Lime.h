#ifndef _LIME_H_
#define _LIME_H_

#include "Lemon.h"

class Lime : public Lemon
{
 public:
	Lime();
	~Lime();

	virtual std::string getName() const;
};

#endif
