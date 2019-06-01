//#include "pch.h"
#include"math.h"
#include "Torre.h"



//Constructor por defecto

Torre::Torre()
{
	nivel = 0;
}


Torre::Torre(float px, float py)	//Al construir una torre debemos darle su posición
{
	setPos(px, py);
	nivel = 0;	// Seteamos a 0 el nivel, las torres debemos construirlas al iniciar el mapa a nivel 0 que serían solamente los huecos
}


Torre::~Torre()
{
}

void Torre::setPos(float xi, float yi)
{
	posicion.x = xi;
	posicion.y = yi;
}
void Torre::UpgradeTorre(int oro)	//Deberiamos hacer una función para cada clase de torre o una general y que segun que torre sea haga distintas cosas ???
{
	if (oro >= oro_necesario)
	{
		// Hacer aqui los cambios necesarios para que la torre se upgradee
		// Hay que hacer diferentes objetos Torre, cada uno se mejorará de formas distintas
		nivel++;


	}
	else
	{
		// De alguna forma poner un texto en rojo como que no se tiene oro suficiente o algo asi
	}
}

float Torre::distancia(Vector2D p1, Vector2D p2)
{
	return (float)(sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y)));
}

