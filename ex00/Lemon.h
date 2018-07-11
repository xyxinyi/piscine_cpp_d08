#ifndef _LEMON_H_
#define _LEMON_H_

#include <string>
#include "Fruit.h"

class Lemon : public Fruit
{
 public:
  Lemon();
  ~Lemon();

  std::string	getName() const;
};

#endif
