/*
Nombre del archivo: structuaarreglos.cpp
Autor: Lean
Lugar: ITV
Instrucciones: arreglos.cpp
*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	/*Datos de entrada: cantidad de estudiantes, codigo de carnet, carrera, año academico, clase abordada,nombre del docente, fecha de inici, fecha de finalisacion*/
	const string carrera = "Tecnico Superios en Electronica Industrial";
	const string inscripcion = "2022IIS-EI025-01";
	const string asignatura = "Introduccion a la programacion";
	const string pemsum = "03-EI01";
	const string codigoasignatura = "EI025";
	string nombredocente;
	string fecha;
	int cantidadestudiantes;
	double promedionotas;
	
	//pedir datos
	cout << "Nombre del docente: " << endl;
	getline(cin,nombredocente);
	cout << "Bienvenido " << nombredocente << " al sistema de control y registro academico " << endl;
	cout << "Fecha(DD/MM/AA): " << endl;
	cin >> fecha;
	cout << "Cantidad de estudiantes del grupo: " << endl;
	cin >> cantidadestudiantes;
	
	string codigocarnet[cantidadestudiantes];	
	string nombrecompleto[cantidadestudiantes];	
	int primerparcial[cantidadestudiantes];		//25
	int segundoparcial[cantidadestudiantes];	//25
	int tercerparcial[cantidadestudiantes];		//25
	int acumulado[cantidadestudiantes];  		//25
	int notafinal[cantidadestudiantes];			//100
	char observaion[cantidadestudiantes];		//R-reprobado A-aprobado P-pendiente

	cout << "***********************************" << endl;
	cout << "INGRESE LOS DATOS DE CADA ESTUDIANTE: " << endl;
	cout << "***********************************" << endl;
	for(int i = 0;i < cantidadestudiantes;i++){
		cout << "Estudiante[" << i+1 << "]" << endl;
		cout << "Numero de carnet= ";
		cin >> codigocarnet[i];
		cout << "Nombre completo: "; 
		getline(cin >> ws,nombrecompleto[i]);
		cout << "Nota primer parcial: ";
		cin >> primerparcial[i];
		cout << "Nota segundo parcial: ";
		cin >> segundoparcial[i];
		cout << "Nota tercer parcial: ";
		cin >> tercerparcial[i];
		cout << "Nota Acumulada: ";
		cin >> acumulado[i];
	}
	//Procesamiento
	//Calculo nota final
	for(int i = 0;i < cantidadestudiantes;i++){
		notafinal[i] = primerparcial[i] + segundoparcial[i] + tercerparcial[i] + acumulado[i];
	}
	//Determinar si el estudiante aprobo el promedio
	for(int i = 0;i < cantidadestudiantes;i++){
		if(notafinal[i] = 'R'){
			cout << "el estudiante " << nombrecompleto << " con numero de carnet " << codigocarnet << " ha repdrobado la asignatura " << asignatura << endl;
		}
	}
		
	
	return 0;
}
	
