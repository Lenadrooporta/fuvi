/*
Nombre del archivo: juego de adivinanza
Autor: Lean
Lugar: ITV
Instrucciones: juego de adivinanza
*/

#include<iostream>

using namespace std;

int main(){
	int tabla;
	
	cout << "Cual tabla de multiplicar desea mostrar"<< endl;
	cin >> tabla;
	
	for(int i = 1; i < 13; i++){
		if (i % 3 == 0){
			cout << tabla << " x " << i << " = " << tabla*i << endl;
			cout << "*" ;
		}
		
		cout << tabla << " x " << i << " = " << tabla*i << endl;
	}
		
	return 0;
}