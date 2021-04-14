#pragma once
#include <stdio.h>
#include <string.h> 
#include <iostream>
#include "ArrayList.h"
#include "Persona.h"
#include "Docente.h"
#include "Estudiante.h"
#include "ProfesorInterino.h"
#include "ProfesorTitular.h"
using namespace std;
class Universidad
{
private:
	string direccion;
	string telefono;
	ArrayList<Persona>* estudiantes;
	ArrayList<Persona>* docentes;
	
public:
	Universidad() {
		estudiantes = new ArrayList<Persona>();
		docentes= new ArrayList<Persona>();
		direccion = "M.M.Marques, Cochabamba";
		telefono = " 4 4293100";
	}
	Persona* cargarDatosPersona() {
		string nombre, apPa, apMa, carrera;
		int ci, edad;
		cout << "Ingrese el nombre" << endl;
		cin >> nombre;
		cout << "Ingrese el apellido paterno" << endl;
		cin >> apPa;
		cout << "Ingrese el apellido materno" << endl;
		cin >> apMa;
		cout << "Ingrese su edad" << endl;
		cin >> edad;
		cout << "Ingrese su ci" << endl;
		cin >> ci;
		Persona* aux =new Persona(nombre, apPa, apMa, edad, ci);
		return aux;
	}
	void agregarEstudiantes() {
		string carrera;
		Persona*aux=cargarDatosPersona();
		cout << "Ingrese la carrera" << endl;
		cin >> carrera;
		Persona* person = new Estudiante(aux->getNombre(),aux->getApellidoPater(),aux->getApellidoMater(),aux->getEdad(),aux->getCi(),carrera);
		estudiantes->add(person);
	}
	void agregarDocentes() {
		int op;
		string facultad;
		Persona* aux = cargarDatosPersona();
		cout << "Ingrese la facultad" << endl;
		cin.ignore();
		getline(cin, facultad);
		cout << "Que tipo de docente se añadira a la universidad:" << endl;
		cout << "1.- Docente Interino" << endl;
		cout << "2.- Docente Titular" << endl;
		cin >> op;
		if (op==1) {
				int dia, mes, anio, dia2, mes2, anio2,bandera=1;
			do {
				cout << "Para el docente interino se necita la fecha de comienzo y finalizacion de contrato" << endl;
				cout << "Ingrese fecha de inicio en el siguiente formato DD MM AA" << endl;
				cin >> dia >> mes >> anio;
				if (fechaEsCorrecta(dia, mes, anio)) {
					cout << "Ingrese fecha de finalizacion en el siguiente formato DD MM AA" << endl;
					cin >> dia2 >> mes2 >> anio2;
					if (fechaEsCorrecta(dia2, mes2, anio2)) {
						Fecha* comienzo = new Fecha(dia, mes, anio);
						Fecha* finalizacion = new Fecha(dia2, mes2, anio2);
						Persona* docente = new ProfesorInterino(aux->getNombre(), aux->getApellidoPater(), aux->getApellidoMater(), aux->getEdad(), aux->getCi(), facultad, comienzo, finalizacion);
						docentes->add(docente);
						bandera = 0;
					}
					else {
						cout << "Fecha de finalizacion incorrecta vuelva a ingresar" << endl;
						system("pause");
					}
				}
				else {
					cout << "Fecha de comienzo incorrecta vuelva a ingresar" << endl;
					system("pause");
				}
			} while (bandera);
				
		}
		else {
			Persona* docen = new ProfesorTitular(aux->getNombre(), aux->getApellidoPater(), aux->getApellidoMater(), aux->getEdad(), aux->getCi(), facultad);
			docentes->add(docen);
		}
				
		cout << "Doncente registrado!" << endl;
	}
	bool fechaEsCorrecta(int dia,int mes , int anio) {
		bool res = false;
		if (dia>=1&& dia<31) {
			if (mes >= 1 && mes <= 12) {
				if (anio>0){
					res = true;
				}
			}
		}
		return res;
	}
	void mostrarEstudiantes() {
		estudiantes->mostrar();
	}
	void mostrarDocentes() {
		docentes->mostrar();
	}
};

