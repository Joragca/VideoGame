
#pragma once

#define MAX_DISPAROS 10
#include "Disparo.h"
#include "Enemigo.h"
#include "ListaEnemigos.h"
#include "Interaccion.h"

class ListaDisparos
{
	friend class ListaEnemigos;
public:
	ListaDisparos();
	virtual ~ListaDisparos();

	bool agregar(Disparo* d);
	void destruirContenido();
	void mueve(float t);
	void dibuja();

	bool colision(ListaEnemigos e);	//Devuelve true si hay un enemigo impactado, false si no, ademas se encarga de restar la vida del enemigo imparcado y eliminarlo si es preciso


private:
	Disparo * lista[MAX_DISPAROS];
	int numero;
};
