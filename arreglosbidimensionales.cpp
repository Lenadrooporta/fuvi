/*
Nombre del archivo: structuaarreglos.cpp
Autor: Lean
Lugar: ITV
Instrucciones: arreglos.cpp
*/

#include<iostream>
#include<iomanip>


using namespace std;

int main(){
	
	int matriza[2][2];
	cout << "Ingrese los datos: " << endl;
	
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			cout << "elemento [" << i << "," << j << "] = ";
			cin >> matriza[i][j];
		}
	}
	
	cout << "*******************************************" << endl;
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			cout << right << setw(15) << "Elemento [" << i << "," << j << "] =" << matriza[i][j] << endl;
		}
		cout << endl;
	}
	
	double matrizb[2][2] {};
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 2;j++){
			cout << right << setw(15) << "elemento [" << i << "," << j << "] = " << matrizb[i][j] << endl;
			cin >> matrizb[i][j];
		}
	}
	
	return 0;	
}