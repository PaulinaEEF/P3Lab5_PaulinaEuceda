#include "Habitantes.h"



Habitantes::Habitantes(int valorVida)
{
	this->valorVida=valorVida;
}

int Habitantes::getValorVida(){
	return this->valorVida;
}
void Habitantes::setValorVida(int valorVida){
	this->valorVida=valorVida;
}

Habitantes::~Habitantes()
{
}
