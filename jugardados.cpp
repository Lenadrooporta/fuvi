/*
Nombre del archivo: jugardados.cpp
Autor: Lean
Lugar: ITV
//Instrucciones: juegos de dados
*/
#include<iostream>
#include<cstdlib> //c standard library
#include<ctime>

using namespace std;

int main(){
	srand(time(nullptr));
	int valorMax = 6, valorMin = 1;
	
	//Formula para generar numeros dentro de un rango
	short dado1 = (rand() % (valorMax - valorMin + 1)) + valorMin;
	short dado2 = (rand() % (valorMax - valorMin + 1)) + valorMin;
	
	cout << dado1 << " , " << dado2;
	
	return 0;
}
