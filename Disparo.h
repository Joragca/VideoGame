#pragma once

#include "Vector2D.h"

class Disparo
{
	//Variables:
	Vector2D posicion;
	Vector2D velocidad;

	float dmgfisico;
	float dmgquimico;


public:
	//Constructor y destructor
	Disparo();
	~Disparo();

	//Metodos
	void getPos(float xi, float yi);
	void getVel(float vx, float vy);
	
};
