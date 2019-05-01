#pragma once

#include "Vector2D.h"

class Enemigo
{
	//Variables:
	Vector2D posicion;
	Vector2D velocidad;

	float res_fisico;
	float res_quimico;
	float hp;

public:

	//Constructor y destructor
	Enemigo();
	~Enemigo();

	//Metodos:
	void getPos(float xi, float yi);
	void getVel(float vx, float vy);
};

