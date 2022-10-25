/*
Nombre del archivo: structurawhille.cpp
Autor: Lean
Lugar: ITV
Instrucciones: crearemos nuetra primera aplicacion
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	string nombre;
	cout << "Ingrese su nombre: " << endl;
	getline(cin,nombre);
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	
	while(edad < 18){
		cout << "Ingrese su edad: " << endl;
		cin >> edad;
	}
	cout << "Bienvenido, " << nombre << endl;
	cout << "Fin del mundo se acerca";
	
	
	return 0;
}