#pragma once
#include <iostream>
#include <sstream>
using namespace std;
//Tiene las posiciones del jugador 

class Ficha
{
private:
	int x;
	int y;
	char ficha;

public:

	Ficha();
	Ficha(int, int, char);
	int getX();
	int getY();
	char getFicha();
	string toString();



};

