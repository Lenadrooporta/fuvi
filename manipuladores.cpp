/*
Nombre del archivo: manipuladores.cpp
Autor: Lean
Lugar: ITV
Instrucciones: Ejemplo de manipuladores
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(){	

	cout << left;
	cout << setw(20) << "Artista " << setw(10) << "Album " << endl
		 << setw(20) << "Michael Jackon " << setw(10) << "Thriller ";
	
	cout << fixed << setprecision(0) << 12.34467;

	return 0;
}