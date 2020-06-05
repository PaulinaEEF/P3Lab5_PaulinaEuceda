#include <iostream>
#include <cstdlib>
#include <ctime>
#include"Civilizacion.h"
#include"Habitantes.h"
#include"Aldeano.h"
#include"Guerrero.h"
#include"Jinete.h"
#include"Caballero.h"
#include"Arquero.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char** argv) {
	vector<Habitantes*> listaHabitantesMain;
	vector<Civilizacion*> listaCivilizacion;
	listaCivilizacion.push_back(new Civilizacion("Los Palomeros"));
	listaCivilizacion.push_back(new Civilizacion("Tajada Crujiente"));
	listaCivilizacion.push_back(new Civilizacion("Acaso no lo viste venir?"));
	
	bool control_salidaMenuPrincipal=true;
	int numeroRandom, opcion;
	srand((unsigned)time(0));
	numeroRandom = rand() % 100;
	
	
	///////////////////////////////////////
	
	while(control_salidaMenuPrincipal){
		cout<<"1. Crear civilizacion"<<endl
			<<"2. Jugar"<<endl
			<<"3. Salir"<<endl;
		
		int eleccionMenuPrincipal;		
		cout<<"Ingrese la opcion que desea: ";
		cin >> eleccionMenuPrincipal;
		
		switch(eleccionMenuPrincipal){
			case 1:{
				string nombreCivilizacion;
				cout<<"Ingrese el nombre de una civilizacion: ";
				cin >> nombreCivilizacion;
				
				listaCivilizacion.push_back(new Civilizacion(nombreCivilizacion));
				
				cout<<"Civilizacion creada";
				break;
			}
			case 2:{
				cout<<endl;
				
				for(int i=0; i<listaCivilizacion.size(); i++){
					cout<<i<<") "<<listaCivilizacion[i]->getNombre()<<endl;
				}
				cout<<"Elija el inidice de una civilizacion: ";
				int eleccionCivilizacion;
				cin >> eleccionCivilizacion;
				
				while(eleccionCivilizacion>=listaCivilizacion.size()){
					cout<<"Esa civilizacion no existe. Elija una nueva: ";
					cin >> eleccionCivilizacion;
				}
				
				
				bool control_salidaMenuJugar=true;
				while(control_salidaMenuJugar){
					cout<<"1. Crear aldeano"<<endl
						<<"2. Crear jinete"<<endl
						<<"3. Crear arquero"<<endl
						<<"4. Crear caballero"<<endl
						<<"5. Construir casa"<<endl
						<<"6. Construir cuartel"<<endl
						<<"7. Construir establo"<<endl
						<<"8. Ir a guerra"<<endl
						<<"9. Siguiente hora"<<endl
						<<"10. Salir"<<endl;
						
					int eleccionMenuJugar;		
					cout<<"Ingrese la opcion que desea: ";
					cin >> eleccionMenuJugar;
					
					switch(eleccionMenuJugar){
						case 1:{
							if((listaCivilizacion[eleccionCivilizacion]->getCantCasas()*5)<=listaCivilizacion[eleccionCivilizacion]->getCantHabitantes() || listaCivilizacion[eleccionCivilizacion]->getCantAlimento()<=25){
								cout<<"Ya no hay suficientes casas para alojar al aldeano. Cree nuevas casas"<<endl;
								
							}else{
								listaCivilizacion[eleccionCivilizacion]->sumarHabitante(new Aldeano(100));
							}
							break;
						}
						case 2:{
							int cantJinetes_enLista=0;
							
//							for(int i = 0; i<listaCivilizacion.size(); i++){
//								cout<<"antes del desastre"<<endl;
//								cout<<listaCivilizacion[eleccionCivilizacion]->getHabitantes().size()<<endl;
//								Habitantes *pP = dynamic_cast<Jinete*>(listaCivilizacion[eleccionCivilizacion]->getHabitantes()[i]);
//								if(pP != 0){
//									cantJinetes_enLista++;
//								}
//							}
							if(listaCivilizacion[eleccionCivilizacion]->getCantEstablos()==0){
								cout<<"Ya no hay suficientes establos para alojar al caballo del jinete. Cree nuevo establo"<<endl;
								
							}else{
								listaCivilizacion[eleccionCivilizacion]->sumarHabitante(new Jinete(100, 30));
							}
							break;
						}
						case 3:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantCuarteles()==0){
								cout<<"Ya no hay suficientes cuarteles. Cree uno nuevo."<<endl;
								
							}else{
								listaCivilizacion[eleccionCivilizacion]->sumarHabitante(new Arquero(100, 20));
							}
							break;
						}
						case 4:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantCuarteles()==0){
								cout<<"Ya no hay suficientes cuarteles. Cree uno nuevo."<<endl;
								
							}else{
								listaCivilizacion[eleccionCivilizacion]->sumarHabitante(new Caballero(100, 10));
								cout<<"Creado con exito!"<<endl;
							}
							break;
						}
						case 5:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantMadera()<50){
								cout<<"Ya no hay suficiente madera. Sorry alli."<<endl;
								
							}else{
								listaCivilizacion[eleccionCivilizacion]->sumarCasas();
								listaCivilizacion[eleccionCivilizacion]->setCantMadera((listaCivilizacion[eleccionCivilizacion]->getCantMadera()-50));
								cout<<"Creado con exito!"<<endl;
							}
							break;
						}
						case 6:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantMadera()<150 || listaCivilizacion[eleccionCivilizacion]->getCantOro()<50){
								cout<<"Ya no hay suficientes materiales. Sorry alli."<<endl;
								
							}else{
								listaCivilizacion[eleccionCivilizacion]->sumarEstablos();
								listaCivilizacion[eleccionCivilizacion]->setCantMadera((listaCivilizacion[eleccionCivilizacion]->getCantMadera()-150));
								listaCivilizacion[eleccionCivilizacion]->setCantOro((listaCivilizacion[eleccionCivilizacion]->getCantOro()-50));
								cout<<"Creado con exito!"<<endl;
							}
							break;
						}
						case 7:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantMadera()<200 || listaCivilizacion[eleccionCivilizacion]->getCantOro()<50){
								cout<<"Ya no hay suficientes materiales. Sorry alli."<<endl;
								
							}else{
								listaCivilizacion[eleccionCivilizacion]->sumarCuarteles();
								listaCivilizacion[eleccionCivilizacion]->setCantMadera((listaCivilizacion[eleccionCivilizacion]->getCantMadera()-200));
								listaCivilizacion[eleccionCivilizacion]->setCantOro((listaCivilizacion[eleccionCivilizacion]->getCantOro()-50));
								cout<<"Creado con exito!"<<endl;
							}
							break;
						}
						case 8:{
							
							break;
						}
						case 9:{
							
							break;
						}
						case 10:{
							control_salidaMenuJugar = false;
							break;
						}
						
						
					}
					
				}
				
				
				
				
				//empleados.erase(empleados.begin() + despedirPos);
				break;
			}
			case 3:{
				control_salidaMenuPrincipal = false;
				
				
				
				break;
			}
			
		}
		cout<<endl;
		cout<<endl;
		
	}
	
	////////////////////////////////////
	return 0;
}
