#include "Interfaz.h"

void Interfaz::color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void Interfaz::bienvenida()
{
	for (int i = 0; i < 3; i++) { cout << "\n"; }
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	color(13);
	cout << "  ¡ B i e n v e n i d o s ! \n";
	for (int i = 0; i < 1; i++) { cout << "\n"; }
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	color(15);
	cout << "      JUEGO DOTS \n";
	for (int i = 0; i < 2; i++) { cout << "\n"; }
	color(13);
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << " ________      __     __      \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|   _____|    |  |   |  |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|  |____      |  |___|  |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|   ____|     |   ___   |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|  |          |  |   |  |     \n";
	for (int i = 0; i < 5; i++) { cout << "\t"; }
	cout << "|__|          |__|   |__|     \n";
	for (int i = 0; i < 1; i++) { cout << "\n"; }
	for (int i = 0; i < 4; i++) { cout << "\t"; }
	cout << "   No es mucho pero es trabajo honesto \n";

	color(15);
	cout << "\n\n\n";
	cout << "\t\t\t\t      [Pulse ";
	color(10);
	cout << " ENTER ";
	color(15);
	cout << " para continuar] ";
	cin.clear();
	cin.get();
	cout << "\n\n\t\t\t\t\t\tCargando...\n" << endl;
	cout << "\t\t\t";
	for (int i = 0; i < 60; i++) {
		color(255);
		cout << " ";
		Sleep(7);
	}
	color(15);
}

void Interfaz::inicializa()
{
	//metodo para inicializar archivos y demás
}
