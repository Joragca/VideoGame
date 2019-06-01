//#include "pch.h"
#include "Interaccion.h"



Interaccion::Interaccion()
{
}


Interaccion::~Interaccion()
{
}

bool Interaccion:: colision(Disparo d, Enemigo e)		//Devuelve true si hay colision y false si no la hay
{	
	if ((d.posicion.x - e.posicion.x) < 0.1 || (d.posicion.y - e.posicion.y) < 0.1) return true;
	return false;
}

bool Interaccion::enRango(Torre t, Enemigo e)
{
	Vector2D posE = e.getPos();
	Vector2D posT = t.getPos();
	float dist = t.distancia(posT,posE);
	if (dist < t.getRango())
		return true;
	return false;
}