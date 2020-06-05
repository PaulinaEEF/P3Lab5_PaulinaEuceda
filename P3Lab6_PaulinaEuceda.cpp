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
	
	//Persona *pP = dynamic_cast<Alumno*>(personas[i]);
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
							if(listaCivilizacion[eleccionCivilizacion]->getCantCasas()==listaCivilizacion[eleccionCivilizacion]->getCantHabitantes()){
								cout<<"Ya no hay suficientes casas para alojar al aldeano. Cree nuevas casas";
								
							}else{
//								Aldeano* aldeano =new Aldeano(100);
//								listaCivilizacion[eleccionCivilizacion]->sumarHabitante(aldeano);
							}
							break;
						}
						case 2:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantCasas()==listaCivilizacion[eleccionCivilizacion]->getCantHabitantes()){
								cout<<"Ya no hay suficientes establos para alojar al caballo del jinete. Cree nuevos establos";
								
							}else{
								
							}
							break;
						}
						case 3:{
							
							break;
						}
						case 4:{
							
							break;
						}
						case 5:{
							
							break;
						}
						case 6:{
							
							break;
						}
						case 7:{
							
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
