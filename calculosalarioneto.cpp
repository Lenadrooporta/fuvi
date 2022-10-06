/*
Nombre del archivo: calculosalarioneto.cpp
Autor: Lean
Lugar: ITV
Instrucciones: Ejemplo de programacion estructurada
Diseñar un algoritmo y luego implementarlo en lenguaje Java.
Se le va a pedir al usuario que ingrese el monto de su salario bruto o básico.
A partir de ese dato se le va a calcular el ingreso neto.
El ingreso neto es igual al ingreso total menos las deducciones totales.
El ingreso total se calcula sumando el ingreso bruto y el ingreso por antigüedad.
El ingreso por antigüedad es igual al 15% del ingreso bruto.
Luego calcule las deducciones totales que son:
deducción del inss
deduccion del ir
monto por afiliacion del sindicato
El monto por afiliación del sindicato se calcula como el 1% del ingreso bruto.
El monto del inss se calcula como el 7% del ingreso total.
El monto del ir se calcula como el 15.6% del ingreso total.
Se le debe calcular la deducción a la empresa o institución, este es el
INSS patronal y es igual al 22,5% del ingreso total del empleado.
Imprima el detalle de los cálculos para que el usuario vea cómo se calcula su salario neto.
*/
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
	//variables globales - CONSTANTES
	const double TASA_ANTIGUEDAD = 15;
	const double TASA_SINDICATO = 1;
	const double TASA_INSS = 7;
	const double TASA_IR = 15.6;
	const double TASA_IP = 22.5;
int main (){

	//DECLARACION DE VARIABLES - LOCALES
	double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
	double montoAntiguedad, montoSindicat, montoINNS, montoIR, montoIP ;
	string nombre;
	//PEDIR DATOS AL USUARIO
	cout << " Hola, Bienvenido" << endl;
	cout << " Ingrese su Nombre: " << endl;
	getline(cin,nombre);
	cout << " Mucho gusto " << nombre << endl;
	cout << "Ingrese su salaio basico: C$";
	cin >> salarioBasico;
	//Calcular Ingresos
	montoAntiguedad = salarioBasico * (TASA_ANTIGUEDAD/100);
	ingresoTotal = salarioBasico + montoAntiguedad;
	//Calcular las deducciones al empleado
	montoSindicat = salarioBasico + (TASA_SINDICATO/100);
	montoINNS = ingresoTotal * (TASA_INSS/100);
	montoIR = ingresoTotal * (TASA_IR/100);
	deduccionesTotales = montoSindicat + montoINNS + montoIR;
	//Calcular las deducciones al empleador
	montoIP = ingresoTotal * (TASA_IP/100);
	//Mostrar resulatdos
	cout << "Su salario basicoo bruto es de = C$" << salarioBasico << endl;
	cout << "----Los Ingresos Totales----"  << endl;
	cout << left << setw(20) << " Su monto por antiguedad = C$" << montoAntiguedad << right << setw(10) << " Su monto por Ingreso Total = C$ " << ingresoTotal << endl;
	cout << "********Las Deducciones Totales********" << endl;
	cout << left << setw(20) << " Su monto por Sindicato = C$" << montoSindicat << right << setw(10) << " Su monto por INSS = C$" << montoINNS << endl;
	cout << left << setw(20) << " Su monto por IR = C$" << montoIR << right << setw(10) << " Sus Deducciones Totales = C$" << deduccionesTotales << endl;
	cout << "*-*-*-*-Las Deducciones de su Empleador-*-*-*-*" << endl;
	cout << " El monto del INSS PATRONAL = C$" << montoIP << endl;
	
	return 0;
}








