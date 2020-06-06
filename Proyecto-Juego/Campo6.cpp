#include "Campo6.h"

Campo6::Campo6()
{
	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 3; y++) {
			celda[x][y] = new Ficha(x, y, 0);
		}
	}
}

string Campo6::dibujarCelda()
{
	int f = 1;
	int c = 1;
	stringstream s;
	

}

