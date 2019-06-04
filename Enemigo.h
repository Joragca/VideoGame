#pragma once

#include "Vector2D.h"
#include "ObjetoMovil.h"

class Enemigo: public ObjetoMovil
{
	friend class Interaccion;
protected:
	//Variables:

	float res_fisico;
	float res_quimico;
	float hp;

public:

	//Constructor y destructor
	Enemigo();
	virtual ~Enemigo();

	//Metodos propios de los enemigos:
	bool restaHp(float daño);	// Se encarga de restar vida a un enemigo y devolver true si baja de 0
	
	//Metodos GET:

	//Metodos SET:
	void setHp(float hpi);

};