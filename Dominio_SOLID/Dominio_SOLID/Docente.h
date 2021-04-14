#pragma once
#include "Persona.h"
#include <string>
using namespace std;
class Docente :public Persona
{
	private:
		string facultad;
		string tipoDocente;
	public:
		Docente(string nombre, string apellidoPater, string apellidoMater, int edad, int ci, string facultad,string tipoDocente)
			:Persona(nombre, apellidoPater, apellidoMater, edad,ci) {
			this->tipoDocente = tipoDocente;
			this->facultad = facultad;
		}
		string getTipo() {return tipoDocente;}
		string getFacultad() { return facultad; }
		void setFacultad(string facultad) { this->facultad = facultad; }
		virtual float importeNomina()=0;
		virtual void mostrar() =0;
};

