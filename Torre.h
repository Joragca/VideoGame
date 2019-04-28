#pragma once

#include"Vector2D.h"

class Torre
{
	//Variables:

	Vector2D posicion;
	float rango;
	int nivel;
	float oro;

public:
	//Constructor y destructor:
	Torre();
	~Torre();

	//Metodos:
	void getPos(float xi, float yi);
};

