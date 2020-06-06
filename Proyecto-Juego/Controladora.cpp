#include "Controladora.h"

void Controladora::menuPrincipal()
{
	char entrar;
	do {
		cout << " \n";
		cout << "       +-----------------------------------------------+" << endl;
		cout << "       |                      MENU                     |" << endl;
		cout << "       +-----------------------------------------------+" << endl;
		cout << "       |                                               |" << endl;
		cout << "       |  1. Jugar Persona VS Persona                  |" << endl;
		cout << "       |  2. Jugar Persona VS Máquina                  |" << endl;
		cout << "       |  3. Cargar Partidas                           |" << endl;
		cout << "       |  4. Salir                                     |" << endl;
		cout << "       |                                               |" << endl;
		cout << "       +-----------------------------------------------+" << endl;
		cout << "       Opcion: ";
		cin >> entrar;
		switch (entrar) {

		case '1':

			system("cls");
			//Persona vs Persona 
			system("pause");
			system("cls");
			break;

		case '2':

			system("cls");
			//Persona vs maquina
			system("pause");
			system("cls");
			break;

		case '3':

			system("cls");
			//cargar partidas
			system("pause");
			system("cls");
			break;

		case '4':
			//----salir-----
			cout << " \n";
			cout << "       Saliendo del programa \n";
			cout << " \n";
			system("pause");
			exit(1);

			break;
		default:
			cout << " \n";
			cout << "       La opcion digitada es incoreccta: " << endl;
			cout << " \n";
			system("pause");
			system("cls");
			break;

		}
	} while (entrar > 4);
}

void Controladora::inicio()
{
	Interfaz::bienvenida();
	Interfaz::inicializa();
	Controladora::menuPrincipal();
}
