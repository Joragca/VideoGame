
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

	void colision(ListaEnemigos e);


private:
	Disparo * lista[MAX_DISPAROS];
	int numero;
};
