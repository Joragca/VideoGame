#include "pch.h"
#include "ListaTorres.h"


ListaTorres::ListaTorres()
{
	numero = 0;

	for (int i = 0; i < MAX_TORRES; i++)
	{
		lista[i] = 0;
	}
}


ListaTorres::~ListaTorres()
{
}

bool ListaTorres::agregar(Torre *t)
{
	if (numero < MAX_TORRES)	
	{
		lista[numero++] = t;
		for (int i = 0; i < numero; i++)
		{
			for (int j = 0; j < numero; j++)
			{
				if (lista[i] == lista[j]) { return false; break; }
			}
		}

	}
	else return false;
	return true;
}

/*
void ListaTorres::dibuja()	//NECESITAMOS PRIMERO DEFINIR EL M�TODO DIBUJA DE LAS TORRES !!!!
{
	for (int i = 0; i < numero; i++)
		lista[i]->dibuja();
}
*/

void ListaTorres::eliminar(int index)
{
	if (index < 0 || index >= numero)
		return;
	delete lista[index];
	numero--;

	for (int i = index; i < numero; i++)
	{
		lista[i] = lista[i + 1];
	}
}

void ListaTorres::eliminar(Torre *t)
{
	for (int i = 0; i < numero; i++)
		if (lista[i] == t)
		{
			eliminar(i);
			return;
		}
}

void ListaTorres::destruirContenidoLista()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}