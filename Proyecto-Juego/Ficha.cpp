#include "Ficha.h"

Ficha::Ficha()
{
	x = 0;
	y = 0;
	ficha = 0;
}

Ficha::Ficha(int x, int y, char ficha)
{
	this->x = x;
	this->y = y;
	this->ficha = ficha;
}

int Ficha::getX() { return x; }

int Ficha::getY() { return y; }

char Ficha::getFicha() { return ficha; }

string Ficha::toString()
{
	stringstream s;
	s << x << "," << y << " " << endl;
	return s.str();
}

