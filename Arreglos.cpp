/*
Nombre del archivo: structuaarreglos.cpp
Autor: Lean
Lugar: ITV
Instrucciones: arreglos.cpp
*/

#include<iostream>

using namespace std;

int main(){
	
	int cant;
	
	//Tipo_de_dato_ nombre_arreglo
	double promediosnotas[10];
	
	cout << "Ingrese la cantidad de notas: " << endl;
	cin >> cant;
	
	cout << "Ingrese los datos: " << endl;
	for(int i = 0; i < cant;i++){
		cout << "Elemento [" << i << "] = ";
		cin >> promediosnotas[i];
	}
	for(int i = 0; i < cant;i++){
		cout << "Elemento [" << i << "] = " << promediosnotas[i] << endl;
	}

	return 0;
}

