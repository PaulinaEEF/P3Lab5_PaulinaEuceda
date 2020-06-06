#ifndef ARQUERO_H
#define ARQUERO_H

#include "Guerrero.h"

class Arquero : public Guerrero
{
	public:
		Arquero(int, int);
		void atacar(Habitantes);
		~Arquero();
	protected:
};

#endif
