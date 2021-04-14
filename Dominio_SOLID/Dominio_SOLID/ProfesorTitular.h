#pragma once
#include <string>
#include "Docente.h"
#define DAYS 60
using namespace std;
class ProfesorTitular:public Docente
{
public:
	ProfesorTitular(string nombre, string apellidoPater, string apellidoMater, int edad, int ci, string facultad)
		:Docente(nombre, apellidoPater, apellidoMater, edad, ci, facultad,"Titular") {
	}
	float importeNomina() { return DAYS * 20; }
	void mostrar() {
		cout << "Docente " << getTipo() <<endl;
		Persona:imprimir();
		cout << "Facultad: " << this->getFacultad()<<endl;
	}
};

