#pragma once

#include "Vector2D.h"
#include "ObjetoMovil.h"

class Enemigo: public ObjetoMovil
{
	friend class Interaccion;
protected:
	//Variables:
	//Vector2D posicion;
	//Vector2D velocidad;

	float res_fisico;
	float res_quimico;
	float hp;

public:

	//Constructor y destructor
	Enemigo();
	~Enemigo();

	//Metodos propios de los enemigos:

};

