/*
Nombre del archivo: estructuraif.cpp
Autor: Lean
Lugar: ITV
Instrucciones: Más ejemplos de estructuras codicional if/if..else/if...else...if
*/
#include<iostream>

using namespace std;

int main(){	
	int edad;
	char color;
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	if(edad < 17){
		cout << "Ud no tiene la edad suficiente para conducir un vehicuo" << endl;
		
		if(color == 'r'){
			cout << "Baje la velocidad hasta detenerce suavemente. " << endl;
		} else if (color == 'a'){
			cout << "Tenga precaucion. No puede avanzar " << endl;
		} else if (color == 'v'){
			cout << "Siga adelante " << endl ;
		} else {
			cout << "Color no valido" << endl;
		}
		cout << "Fin del programa";
	}
		
	

	return 0;
}