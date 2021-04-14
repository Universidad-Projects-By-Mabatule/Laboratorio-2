#pragma once
#include <string>
using namespace std;
class Persona
{
	private:
		string nombre;
		string apellidoPater;
		string apellidoMater;
		int edad;
		int ci;
	public:
		Persona(string nombre,string apellidoPater, string apellidoMater,int edad,int ci) {
			this->nombre=nombre;
			this->apellidoPater=apellidoPater;
			this->apellidoMater=apellidoMater;
			this->edad=edad;
			this->ci=ci;
		}
		
		string getNombre() { return nombre; };
		string getApellidoPater() { return apellidoPater; };
		string getApellidoMater() { return apellidoMater; };
		int getCi() { return ci; }
		int getEdad() { return edad; }
		void setNombre(string nom) { nombre = nom; };
		void setApellidoPater(string apP) { apellidoPater = apP; };
		void setApellidoMater(string apM) { apellidoMater = apM; };
		virtual void mostrar() {  };
		void imprimir() {
			cout << "Nombre: " << nombre << endl;
			cout << "Apellido: " << apellidoPater << " " << apellidoMater << endl;
			cout << "Edad: " << edad << endl;
			cout << "Ci: " << ci << endl;
		};
};

