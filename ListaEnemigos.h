#pragma once
#define MAX_ENEMIGOS 100

#include "Enemigo.h"
#include "Interaccion.h"


class ListaEnemigos
{
	friend class ListaDisparos;
public:
	ListaEnemigos();
	~ListaEnemigos(void);

	void mueve(float t);
	void dibuja();

	bool agregar(Enemigo* e);
	void eliminar(Enemigo* e);
	void eliminar(int index);
	void destruirContenido();

	
	
	int getNumero() { return numero; }
	Enemigo* operator[] (int index);

private:
	Enemigo * lista[MAX_ENEMIGOS];
	int numero;
};

