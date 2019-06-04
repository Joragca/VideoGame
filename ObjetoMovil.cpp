//Reemplazo

#include "ObjetoMovil.h"
#include"iostream"


ObjetoMovil::ObjetoMovil(void)
{
}


ObjetoMovil::~ObjetoMovil(void)
{
}

void ObjetoMovil::mueve(float t)
{
	//Inicial
	/*
	posicion = posicion + velocidad * t + aceleracion * (0.5f*t*t);
	velocidad = velocidad + aceleracion * t;							// Por alguna razon no coge las operaciones + - pero * si 
	*/
	// El guarro
	Vector2D velocidad_aux = velocidad * t; //debido a problemas que no comprendemos, no se pueden poner los sumandos en el orden que queramos, y para solucionar los errores creamos esta variable auxiliar
	posicion = (aceleracion * (0.5f*t*t)) + velocidad_aux + posicion;
	velocidad = (aceleracion * t) + velocidad;

	}
Vector2D ObjetoMovil::getPos()
{
	return posicion;
}
void ObjetoMovil::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}
void ObjetoMovil::setVel(Vector2D vel)
{
	velocidad = vel;
}
void ObjetoMovil::setPos(float x, float y)
{
	posicion.x = x;
	posicion.y = y;
}
void ObjetoMovil::setPos(Vector2D pos)
{
	posicion = pos;
}