#include "Civilizacion.h"

/*int cantOro, cantMadera, cantAlimento, cantHabitantes;
		vector<Habitantes*> listaHabitantes;
		int cantCasas, cantCuarteles, cantEstablos;*/


Civilizacion::Civilizacion(string nombre)
{
	this->nombre=nombre;
	this->cantOro=50;
	this->cantMadera=50;
	this->cantAlimento=50;
	this->cantHabitantes=6;
	this->cantCasas=2;
	this->cantCuarteles=0;
	this->cantEstablos=0;
	listaHabitantes.push_back(new Aldeano(100));
	listaHabitantes.push_back(new Aldeano(100));
	listaHabitantes.push_back(new Aldeano(100));
	listaHabitantes.push_back(new Aldeano(100));
	listaHabitantes.push_back(new Aldeano(100));
	listaHabitantes.push_back(new Jinete(100, 30));
	
	
	
}

string Civilizacion::getNombre(){
	return this->nombre;
}

void Civilizacion::setNombre(string){
	this->nombre=nombre;
	
}

int Civilizacion::getCantOro(){
	return this->cantOro;
}

void Civilizacion::setCantOro(int cantOro){
	this->cantOro=cantOro;
	
}

int Civilizacion::getCantMadera(){
	return this->cantMadera;
}

void Civilizacion::setCantMadera(int cantMadera){
	this->cantMadera=cantMadera;
	
}

int Civilizacion::getCantAlimento(){
	return this->cantAlimento;
}

void Civilizacion::setCantAlimento(int cantAlimento){
	this->cantAlimento=cantAlimento;
	
}

int Civilizacion::getCantHabitantes(){
	return this->cantHabitantes;
}

void Civilizacion::setCantHabitantes(int cantHabitantes){
	this->cantHabitantes=cantHabitantes;
}

int Civilizacion::getCantCasas(){
	return this->cantCasas;
}

void Civilizacion::setCantCasas(int cantCasas){
	this->cantCasas=cantCasas;
}
int Civilizacion::getCantCuarteles(){
	return this->cantCuarteles;
}

void Civilizacion::setCantCuarteles(int cantCuarteles){
	this->cantCuarteles=cantCuarteles;
}

int Civilizacion::getCantEstablos(){
	return this->cantCuarteles;
}

void Civilizacion::setCantEstablos(int cantEstablos){
	this->cantEstablos=cantEstablos;
}

void Civilizacion::sumarCasas(){
	this->cantCasas++;
}

void Civilizacion::sumarCuarteles(){
	this->cantCuarteles++;
}

void Civilizacion::sumarEstablos(){
	this->cantEstablos++;
}


void  Civilizacion::sumarHabitante(Habitantes* habitante){
	
	listaHabitantes.push_back(habitante);
}

vector<Habitantes*> Civilizacion::getHabitantes(){
	return this->listaHabitantes;
}


Civilizacion::~Civilizacion()
{
	for(int i = 0; i<listaHabitantes.size(); i++){
		listaHabitantes.erase(listaHabitantes.begin() + i);
	}
}
