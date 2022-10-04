/*
Nombre del archivo: aleatorios.cpp
Autor: Lean
Lugar: ITV
//Instrucciones: generar numeros aleatorios
*/
#include<iostream>
#include<cstdlib> //c standard library
#include<ctime>

using namespace std;

int main(){	
	//long tiempoTranscurrido = time(nullptr); //1 Enero de 1970
	srand(time(nullptr)); //seed random, semillla de inicio
	int aleatorio = rand() %10;
	int num;
	
	cout << "<adivnie un numero entre 0 y 10 ";
	cin >> num;
	
	if (num == aleatorio){
		cout << "Felicidades, acertaste " ;
	} else {
		cout << "Lo siento, no acertastes";
	}
	cout << aleatorio;
	
	return 0;
}