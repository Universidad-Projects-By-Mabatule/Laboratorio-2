#pragma once
#include "Persona.h"
#include <string>
using namespace std;
class Estudiante:public Persona 
{
	private:
		string carrera;
	public:
		Estudiante(string nombre, string apellidoPater, string apellidoMater, int edad,int ci,string carrera)
		:Persona( nombre,  apellidoPater,  apellidoMater,  edad,ci) {
			this->carrera=carrera;
		}
		string getCarrera() { return carrera; };
		void setCarrera(string car) { carrera = car; };
		void mostrar() {
			Persona:imprimir();
			cout << "Carrera: " << carrera << endl;
		}
};

