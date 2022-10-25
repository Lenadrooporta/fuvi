/*
Nombre del archivo: aplicacion1
Autor: Lean
Lugar: ITV
Instrucciones: crearemos nuetra primera aplicacion*/

#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int op;
	cout << "Menu de opciones: " << endl;
	cout << "1- Computadoras\n2- smartphones\n3- Tablets\n4- Salir" << endl;
	cout << "Selecciones una opcion"; endl;
	cin >> op;
	
	switch(op){
		case 1:
			cout << "Ud ha seleccionado computadoras" << endl;
			break;
		case 2:
			cout << "Ud ha seleccionado smartphones" << endl;
			break;
		case 3:
			cout << "Ud ha seleccionado Tablets" << endl;
			break;
		case 4:
			cout << "Ud ha salido de la aplicacon correctamente" << endl;
			break;
		default:
			cout << "opcion incorrecta" << endl;
			cout << "Intentelo nuevamente" << endl;			
	}
	cout << "fin";

	return 0;
}