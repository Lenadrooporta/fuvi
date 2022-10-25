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
	int num, intento = 1;
	
	do{
		cout << aleatorio;
		
		cout << "Adivine un numero entre 0 y 10" << endl;
		cin >> num;
		if(num == aleatorio){
			cout << "Felicidades, acertastes" << endl;
			intento = 4;
		}else {
			cout << "Numero incorrecto" << endl;
			if (intento == 3){
				cout << "Ud ha agotado todos sus intentos" << endl;
			}
			intento++;
		}
	}
	
	return 0;		
}