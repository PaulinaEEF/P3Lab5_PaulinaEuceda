#include "Guerrero.h"

Guerrero::Guerrero(int valorVida, int valorAtaque):Habitantes(valorVida)
{
	this->valorAtaque=valorAtaque;
}

int Guerrero::getValorAtaque(){
	return this->valorAtaque;
}
void Guerrero::setValorAtaque(int valorAtaque){
	this->valorAtaque=valorAtaque;
}

Guerrero::~Guerrero()
{
}
