#pragma once

//Metodo encargado de gestionar todas las torres en el mapa asi como sus acciones basicas

#include"Torre.h"

#define MAX_TORRES 20

class ListaTorres
{
private:
	Torre *lista[MAX_TORRES];
	int numero;


public:
	ListaTorres();
	~ListaTorres();


	//Metodos propios de las torres:

	bool agregar(Torre *t);	//M�todo que gestiona la inclusion de una torre a la lista, devolviendo true si se h arealizado la inclusi�n y false si no
	void destruirContenidoLista();	//M�todo que limpia toda la lista de torres. Usado para el destructor de MUNDO
	void dibuja();	//M�todo que gestiona el dibujado de cada torre dentro de la lista
	void eliminar(int index);	//M�todo que gestiona la eliminaci�n A TRAVES DE SU INDICE de cada torre de la lista
	void eliminar(Torre *t);	//M�todo que gestiona la eliminaci�n A TRAVES DE SU PUNTERO de cada torre de la lista ( utiliza el metodo de arriba)
	Torre *operator [](int i);	// Sobrecarga del operador [] para ser capaces de obtener un elemento de la lista indicando su indice
	int getNumero() { return numero; };

};

