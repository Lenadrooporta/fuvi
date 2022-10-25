/*
Nombre del archivo: structuraswitch1
Autor: Lean
Lugar: ITV
Instrucciones: crearemos nuetra primera aplicacion
*/

#include<iostream>

using namespace std;

int main(){
	
	char op;
	int op1, cant, precio;
	
	cout << "Menu de opciones: " << endl;
	cout << "a- Computadoras\nb- smartphones\nc- Tablets\nd- Salir" << endl;
	cout << "Selecciones una opcion" << endl;
	cin >> op;
	
	switch(op){
		case 'a':
		case 'A':
			cout << "Ud ha seleccionado computadoras" << endl;
			cout << "Que tipo de computadora desea comprar " << endl;
			cout << "1-Desktop\n2- Laptop" << endl;
			cin >> op1;
			switch(op1){
				case 1:
					cout << "Ud ha seleccionado computadoras Desktop" << endl;
					cout << "Ingrese cantidad a comprar" << endl;
					cin >> cant;
					precio = 600;
					cout << "Ud va a comprar " << cant << " Computadoras, su pago es de: $ " << (cant*precio)*1.52 << endl;
					break;
			}
			break;
		case 'b':
		case 'B':
			cout << "Ud ha seleccionado smartphones" << endl;
			break;
		case 'c':
		case 'C':
			cout << "Ud ha seleccionado Tablets" << endl;
			break;
		case 'd':
		case 'D':
			cout << "Ud ha salido de la aplicacon correctamente" << endl;
			break;
		default:
			cout << "opcion incorrecta" << endl;
			cout << "Intentelo nuevamente" << endl;			
	}
	cout << "fin";

	return 0;
}