#include "ListaDisparos.h"



ListaDisparos::ListaDisparos()
{
}


ListaDisparos::~ListaDisparos()
{
}

bool ListaDisparos::agregar(Disparo *d)
{
	if (numero<MAX_DISPAROS)
		lista[numero++] = d;
	else
		return false;
	return true;
}

void ListaDisparos::destruirContenido()
{
	for (int i = 0; i < numero; i++)
		delete lista[i];
	numero = 0;
}

void ListaDisparos::eliminar(int index)
{
	if ((index < 0) || (index >= numero))
		return;
	delete lista[index];
	numero--;
	for (int i = index; i < numero; i++)
		lista[i] = lista[i + 1];
}

void ListaDisparos::eliminar(Disparo *d)
{
	for (int i = 0; i<numero; i++)
		if (lista[i] == d)
		{
			eliminar(i);
			return;
		}
}