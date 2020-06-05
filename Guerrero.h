#ifndef GUERRERO_H
#define GUERRERO_H

#include "Habitantes.h"

class Guerrero : public Habitantes
{
	public:
		Guerrero(int, int);
		
		int getValorAtaque();
		void setValorAtaque(int);
		virtual void atacar() = 0;
		
		~Guerrero();
	protected:
		int valorAtaque;
};

#endif
