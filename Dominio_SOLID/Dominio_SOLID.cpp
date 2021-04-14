
#include <iostream>
#include "Universidad.h"
#include "Docente.h"
#include "Estudiante.h"
#include "Fecha.h"
#include "Persona.h"
#include "ProfesorInterino.h"
#include "ProfesorTitular.h"
using namespace std;
//El programa queria hacerlo mucho mas grande pero sin pensarlo ya habia hecho los puntos de SOLID 
//entonces lo hice de esta manera sencilla 
void menu() {
	cout << "Bienvenidos al sistemas de la Universidad UCB" << endl;
	cout << "1.-Agregar estudiante" << endl;
	cout << "2.-Agregar docente"	<< endl;
	cout << "3.-Mostrar estudiantes"<< endl;
	cout << "4.-Mostrar docentes"	<< endl;
	cout << "5.-Salir" << endl;
}
int main()
{
	int op;
	Universidad* universidad = new Universidad();

	do {
		menu();
		cin >> op;
		switch (op) {
			case 1: {
				system("cls");

				universidad->agregarEstudiantes();
				system("pause");
				break;
			}
			case 2: {
				system("cls");

				universidad->agregarDocentes();
				system("pause");
				break;
			}
			case 3: {
				system("cls");
				cout << "Lista de estudiantes de la universidad" << endl;
				cout << "*****************************" << endl;
				universidad->mostrarEstudiantes();
				system("pause");
				break;
			}
			case 4: {
				system("cls");
				cout << "Lista de docentes de la universidad" << endl;
				cout << "*****************************" << endl;
				universidad->mostrarDocentes();
				system("pause");
				break;
			}
			case 5: {
				system("cls");
				cout << "Gracias por utilizar el programa :)" << endl;
				system("pause");
				break;
			}
			default: {
				system("cls");
				cout << "Opcion equivocadada" << endl;
				system("pause");
				break;
			}
		}
		system("cls");
	} while (op!=5);

}

