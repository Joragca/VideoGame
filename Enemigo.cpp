//#include "pch.h"
#include "Enemigo.h"


Enemigo::Enemigo()
{
}


Enemigo::~Enemigo()
{
}

void Enemigo::setHp(float hpi)
{
	hp = hpi;
}
bool Enemigo::restaHp(float daño)
{
	hp -= daño;
	if (hp <= 0) return true;
	return false;
}