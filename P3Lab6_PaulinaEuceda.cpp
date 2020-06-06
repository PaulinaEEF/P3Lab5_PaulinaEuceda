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
	int eleccionCivilizacion;
	vector<Civilizacion*> listaCivilizacion;
	
	vector<Habitantes*> listaHabitantesPendientes;
	listaHabitantesPendientes.push_back(new Jinete(100, 30));
	
	listaHabitantesPendientes.push_back(new Aldeano(100));
	listaHabitantesPendientes[0]->setCantHoras(0);
	listaHabitantesPendientes[1]->setCantHoras(0);
	
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
				eleccionCivilizacion;
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
								//listaCivilizacion[eleccionCivilizacion]->sumarHabitante();
								listaHabitantesPendientes.push_back(new Aldeano(100));
								listaHabitantesPendientes[listaHabitantesPendientes.size()]->setCantHoras(0);
							}
							break;
						}
						case 2:{
							int cantJinetes_enLista=0;
							
							if(listaCivilizacion[eleccionCivilizacion]->getCantEstablos()==0){
								cout<<"Ya no hay suficientes establos para alojar al caballo del jinete. Cree nuevo establo"<<endl;
								
							}else{
								//listaCivilizacion[eleccionCivilizacion]->sumarHabitante(new Jinete(100, 30));
								listaHabitantesPendientes.push_back(new Jinete(100, 30));
								listaHabitantesPendientes[listaHabitantesPendientes.size()]->setCantHoras(0);
							}
							break;
						}
						case 3:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantCuarteles()==0){
								cout<<"Ya no hay suficientes cuarteles. Cree uno nuevo."<<endl;
								
							}else{
								//listaCivilizacion[eleccionCivilizacion]->sumarHabitante(new Arquero(100, 20));
								listaHabitantesPendientes.push_back(new Arquero(100, 20));
								listaHabitantesPendientes[listaHabitantesPendientes.size()]->setCantHoras(0);
								cout<<"Creado con exito!"<<endl;
							}
							break;
						}
						case 4:{
							if(listaCivilizacion[eleccionCivilizacion]->getCantCuarteles()==0){
								cout<<"Ya no hay suficientes cuarteles. Cree uno nuevo."<<endl;
								
							}else{
								//listaCivilizacion[eleccionCivilizacion]->sumarHabitante(new Caballero(100, 10));
								listaHabitantesPendientes.push_back(new Caballero(100, 10));
								listaHabitantesPendientes[listaHabitantesPendientes.size()]->setCantHoras(0);
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
							for(int i=0; i<listaCivilizacion.size(); i++){
								cout<<i<<") "<<listaCivilizacion[i]->getNombre()<<endl;
							}
							cout<<"Elija el inidice de una civilizacion a quien atacar: ";
							int civilizacionElegidaAtacar;
							cin >> civilizacionElegidaAtacar;
							
							while(eleccionCivilizacion == civilizacionElegidaAtacar){
								cout<<"Dudo que se quiera atacar a usted mismo. Elija otra: ";
								cin >> civilizacionElegidaAtacar;
							}
							
							bool yanotengoideasparavariablessignificativas=true;
							while(yanotengoideasparavariablessignificativas){
								cout<<"1) Emparejar"<<endl;
								cout<<"2) Abandonar"<<endl<<"Ingrese la opcion que desea: ";
								int opcion;
								cin >> opcion;
								
								switch(opcion){
									case 1:{
										cout<<listaCivilizacion[eleccionCivilizacion]->getHabitantes().size()<<endl;
										for(int i=0; i<listaCivilizacion[eleccionCivilizacion]->getHabitantes().size(); i++){
											Habitantes* hab = listaCivilizacion[eleccionCivilizacion]->getHabitantes()[i];
											
											Aldeano* pA = dynamic_cast<Aldeano*>(hab);
											//Persona *pP = dynamic_cast<Alumno*>(personas[i]);
											//cout<< hab->getCantHoras()<<" horas"<<endl;
											if(pA == NULL){
												
												
											}else{
												cout<<"else"<<endl;
											}										
											
										}
										cout<<"Imaginemos que pelean"<<endl;
										break;
									}
									case 2:{
										yanotengoideasparavariablessignificativas = false;
										break;
									}
								}
								
								
								
							}
							break;
						}
						case 9:{
							cout<<"--Resumen General--"<<endl;
							cout<<"Cantidad de madera: "<<listaCivilizacion[eleccionCivilizacion]->getCantMadera()<<endl;
							cout<<"Cantidad de oro: "<<listaCivilizacion[eleccionCivilizacion]->getCantOro()<<endl;
							cout<<"Cantidad de alimentos: "<<listaCivilizacion[eleccionCivilizacion]->getCantAlimento()<<endl;
							cout<<"Cantidad de habitantes: "<<listaCivilizacion[eleccionCivilizacion]->getCantHabitantes()<<endl;
							cout<<"Capacidad de habitantes: "<<listaCivilizacion[eleccionCivilizacion]->getCantCasas()*5<<endl;
							
							cout<<"--Resumen de Horas--"<<endl;//no funciona :(
							cout<<listaHabitantesPendientes.size()<<endl;
							for(int i = 0; i<listaHabitantesPendientes.size(); i++){
//								Habitantes* pJinete = dynamic_cast<Jinete*>(listaHabitantesPendientes[i]);
//								if(pJinete != 0){
//									cout<<"Jinete. Horas: "<<listaHabitantesPendientes[i]->getCantHoras()<<endl;
//									
//									
//								}
//								
//								Aldeano* pAldeano = dynamic_cast<Aldeano*>(listaHabitantesPendientes[i]);
////								cout<<pAldeano<<endl;
//								if(pAldeano != 0){
//									cout<<"Aldeano. Horas: "<<listaHabitantesPendientes[i]->getCantHoras()<<endl;
//									listaHabitantesPendientes.erase(listaHabitantesPendientes.begin() + i);
//									listaCivilizacion[eleccionCivilizacion]->sumarHabitante(listaHabitantesPendientes[i]);
//									
//								}
//								Arquero* pArquero = dynamic_cast<Arquero*>(listaHabitantesPendientes[i]);
//								if(pAldeano != 0){
//									cout<<"Arquero. Horas: "<<listaHabitantesPendientes[i]->getCantHoras()<<endl;
//								}
//								Caballero* pCaballero = dynamic_cast<Caballero*>(listaHabitantesPendientes[i]);
//								if(pCaballero != 0){
//									cout<<"Caballero. Horas: "<<listaHabitantesPendientes[i]->getCantHoras()<<endl;
//								}
								
								
								//listaHabitantesPendientes.erase(listaHabitantesPendientes.begin() + i);
							}
							
//							for(int i = 0; i<listaCivilizacion.size(); i++){
//								cout<<"antes del desastre"<<endl;
//								cout<<listaCivilizacion[eleccionCivilizacion]->getHabitantes().size()<<endl;
//								Habitantes *pP = dynamic_cast<Jinete*>(listaCivilizacion[eleccionCivilizacion]->getHabitantes()[i]);
//								if(pP != 0){
//									cantJinetes_enLista++;
//								}
//							}							
							
							break;
						}
						case 10:{
							control_salidaMenuJugar = false;
							break;
						}
						
						
					}
					cout<<endl<<endl;
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
