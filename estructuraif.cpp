/*
Nombre del archivo: estructuraif.cpp
Autor: Lean
Lugar: ITV
Instrucciones: Ejemplo de estructuras codicional if/if..else/if...else...if
*/
#include<iostream>

using namespace std;

int main(){	
	//Estructura condicional o selectiva if
	
	bool estaAprovado = false, esDesercion = true;
	
	if(estaAprovado){
		cout << "UD ha aprovado la asignatura." << endl;
		// operador || es el operador logico o
		// operador || && es el operador logico y
	} else {
		cout << "Ud no ha aprobado la asignatura" << endl;
	}



	return 0;
}