#pragma once
#include "Fecha.h"
#include <string>
#include "Docente.h"
using namespace std;
class ProfesorInterino:public Docente	
{
private:
	Fecha* fechaComienzo;
	Fecha* fechaFinalizacion;
public:
	ProfesorInterino(string nombre, string apellidoPater, string apellidoMater, int edad,int ci, string facultad,Fecha* comienzo,Fecha* final)
		:Docente(nombre, apellidoPater, apellidoMater, edad,ci,facultad,"Interino") {
		fechaComienzo = comienzo;
		fechaFinalizacion = final;
	}
	float importeNomina() { 
		int diasTrabajados = fechaFinalizacion->diferenciaEntreFechas(fechaComienzo);
		return diasTrabajados * 20; 
	}
	void mostrar() {
		cout << "Docente " << getTipo() << endl;
		Persona:imprimir();
		cout << "Facultad: " << this->getFacultad() <<endl;
		cout << "Fecha de comienzo: " << fechaComienzo->getDia() << "/"<<fechaComienzo->getMes()<<"/" <<fechaComienzo->getAnio() <<endl;
		cout << "Fecha de Finalizacion: " << fechaFinalizacion->getDia() << "/" << fechaFinalizacion->getMes() << "/" << fechaFinalizacion->getAnio() << endl;
	}
};

