/*
Nombre del archivo: juego de adivinanza
Autor: Lean
Lugar: ITV
Instrucciones: juego de adivinanza
*/

#include<iostream>
#include<cstdlib> //C standard Library
#include<ctime>

using namespace std;

int main(){
	
	srand(time(nullptr));
	int aleatorio = rand() % 10;
	int num;
	cout << aleatorio;
	
	cout << "Adivine un numero entre 0 y 10" << endl;
	cin >> num;
	while(num != aleatorio){
		cout << "Adivine un numero entre 0 y 10" << endl;
		cin >> num;
	}
	cout << "Felicidades, acertastes" << endl;
		
	return 0;
}