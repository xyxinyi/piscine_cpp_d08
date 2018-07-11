#include "Mixer.h"

int	mixit(FruitBox &src)
{
  FruitNode	*list = src.head();
  int		nbr_vitamine = 0;

  while (list)
    {
      nbr_vitamine += list->f->getVitamins();
      list = list->next;
    }
  return nbr_vitamine;
}

Mixer::Mixer()
{
	this->_plugged = false;
	this->_mixfunc = &mixit;
}

Mixer::~Mixer()
{
}

void Mixer::connect()
{
	this->_plugged = true;
}
