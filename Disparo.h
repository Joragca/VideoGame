#pragma once

#include "Vector2D.h"
#include "ObjetoMovil.h"
#include "Interaccion.h"

class Disparo: public ObjetoMovil
{


protected:

	//Variables:
	//Vector2D posicion;
	//Vector2D velocidad;

	float dmgfisico;
	float dmgquimico;


public:
	friend class Interaccion;

	//Constructor y destructor
	Disparo();
	~Disparo();

	//Metodos propios de los disparos:
	
};

