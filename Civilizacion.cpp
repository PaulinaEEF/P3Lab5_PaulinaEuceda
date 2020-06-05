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
	
}
void Civilizacion::setNombre(string){
	
}
int Civilizacion::getCantOro(){
	
}
void Civilizacion::setCantOro(int){
	
}

int Civilizacion::getCantMadera(){
	
}
void Civilizacion::setCantMadera(int){
	
}
int Civilizacion::getCantAlimento(){
	return this->cantAlimento;
}
void Civilizacion::setCantAlimento(int){
	
}
int Civilizacion::getCantHabitantes(){
	
}
void Civilizacion::setCantHabitantes(int){
	
}
int Civilizacion::getCantCasas(){
	
}
void Civilizacion::setCantCasas(int){
	
}
int Civilizacion::getCantCuarteles(){
	
}
void Civilizacion::setCantCuarteles(int){
	
}
int Civilizacion::getCantEstablos(){
	
}
void Civilizacion::setCantEstablos(int){
	
}

void Civilizacion::sumarCasas(){
	
}
void Civilizacion::sumarCuarteles(){
	
}
void Civilizacion::sumarEstablos(){
	
}

void sumarHabitante(Habitantes){
	
}
vector<Habitantes*> getHabitantes(){
	
}

Civilizacion::~Civilizacion()
{
}
