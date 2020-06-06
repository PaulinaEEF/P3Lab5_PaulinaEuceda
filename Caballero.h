#ifndef CABALLERO_H
#define CABALLERO_H

#include "Guerrero.h"

class Caballero : public Guerrero
{
	public:
		Caballero(int, int);
		void atacar(Habitantes);
		~Caballero();
	protected:
};

#endif
