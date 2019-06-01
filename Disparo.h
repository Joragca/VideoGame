#pragma once


#include "ObjetoMovil.h"
#include "Vector2D.h"

class Disparo: public ObjetoMovil
{
	friend class Interaccion;
protected:

	//Variables:
	//Vector2D posicion;
	//Vector2D velocidad;

	float dmgfisico;
	float dmgquimico;


public:


	//Constructor y destructor
	Disparo();
	virtual ~Disparo();

	//Metodos propios de los disparos:
	//Metodos GET:
	float getdmDañoFisico() { return dmgfisico; };
	float getdmDañoQuimico() { return dmgquimico; };

	//Metodos SET:


};

