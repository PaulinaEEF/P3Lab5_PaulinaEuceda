#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <vector>
#include<iostream>
#include "Aldeano.h"
#include "Jinete.h"
#include "Caballero.h"
#include "Arquero.h"

using std::vector;
using std::string;


class Civilizacion
{
	public:
		Civilizacion(string);
		
		string getNombre();
		void setNombre(string);
		int getCantOro();
		void setCantOro(int);
		
		int getCantMadera();
		void setCantMadera(int);
		int getCantAlimento();
		void setCantAlimento(int);
		int getCantHabitantes();
		void setCantHabitantes(int);
		int getCantCasas();
		void setCantCasas(int);
		int getCantCuarteles();
		void setCantCuarteles(int);
		int getCantEstablos();
		void setCantEstablos(int);
		
		void sumarCasas();
		void sumarCuarteles();
		void sumarEstablos();
		
		void sumarHabitante(Habitantes*);
		
		vector<Habitantes*> getHabitantes();
		
		~Civilizacion();
	protected:
		string nombre;
		int cantOro, cantMadera, cantAlimento, cantHabitantes;
		vector<Habitantes*> listaHabitantes;
		int cantCasas, cantCuarteles, cantEstablos;
};

#endif
