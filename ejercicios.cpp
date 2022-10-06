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
	cout << setw(20) << "Asignatura " << setw(10) << "Estudiantes " << endl
		 << setw(20) << "Programacion " << setw(10) << right << 12  << endl
		 << left << setw(20) << "Redes " << setw(10) << right << 9  << left << endl;
	
	cout << fixed << setprecision(0) << 12.34467;

	return 0;
}