
/*
Nombre del archivo: leannuevo.cpp
Autor: Lean
Lugar: ITV
//Instrucciones: Esto solo es una platilla
*/
#include<iostream>
#include<cmath>

using namespace std;
//variables globales
const double pi = 3.141592;

int main(){
	
	double radio, area;
	cout << "Ingrese el rado del circulo: ";
	cin >> radio;
	area = pi * pow(radio,2);
	cout << "El ara de un circulo con radio" << radio << " es " << area ;
	
 	
	return 0;
}