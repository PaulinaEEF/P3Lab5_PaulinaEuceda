#include "Habitantes.h"



Habitantes::Habitantes(int valorVida)
{
	this->valorVida=valorVida;
	this->cantHoras=0;
}

int Habitantes::getValorVida(){
	return this->valorVida;
}
void Habitantes::setValorVida(int valorVida){
	this->valorVida=valorVida;
}

int Habitantes::getCantHoras(){
	return this->cantHoras;
}
void Habitantes::setCantHoras(int cantHoras){
	this->cantHoras=cantHoras;
}

Habitantes::~Habitantes()
{
}
