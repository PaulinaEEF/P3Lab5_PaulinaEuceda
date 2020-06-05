#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char** argv) {
//	vector<Persona*> personas;
//	personas.push_back(new Alumno("Paulina", "Euceds", "123", 15));
	
	//Persona *pP = dynamic_cast<Alumno*>(personas[i]);
	bool salida=true;
	int numeroRandom, opcion;
	srand((unsigned)time(0));
	numeroRandom = rand() % 100;
	
	
	///////////////////////////////////////
	
	while(salida){
		cout<<"1. Crear civilizacion"<<endl
			<<"2. Jugar"<<endl
			<<"3. Salir"<<endl;
		
		int menuPrincipal;		
		cout<<"Ingrese la opcion que desea: ";
		cin >> menuPrincipal;
		
		switch(menuPrincipal){
			case 1:{
				
				break;
			}
			case 2:{
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
					
				int menuJugar;		
				cout<<"Ingrese la opcion que desea: ";
				cin >> menuJugar;
				
				
				//empleados.erase(empleados.begin() + despedirPos);
				break;
			}
			case 3:{
				salida = false;
				
				
				
				break;
			}
			
		}
		cout<<endl;
		cout<<endl;
		
	}
	
	////////////////////////////////////
	return 0;
}
