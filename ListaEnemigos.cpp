#include "ListaEnemigos.h"


ListaEnemigos::ListaEnemigos()
{
	numero = 0;
	for (int i = 0; i < MAX_ENEMIGOS; i++)lista[i] = 0;
}


ListaEnemigos :: ~ListaEnemigos()
{

}

bool ListaEnemigos::agregar(Enemigo *e)
{
	for (int i = 0; i < numero; i++)//para evitar que se añada una esfera ya existente
		if (lista[i] == e)
			return false;

	if (numero < MAX_ENEMIGOS)
		lista[numero++] = e;
	else
		return false;
	return true;
}

void ListaEnemigos::dibuja()
{
	for (int i = 0; i < numero; i++)
		lista[i]->dibuja();
}

void ListaEnemigos::mueve(float t)
{
	for (int i = 0; i < numero; i++)
		lista[i]->mueve(t);
}


void ListaEnemigos::destruirContenido()
{
	for (int i = 0; i < numero; i++)
		delete lista[i];

	numero = 0;
}

void ListaEnemigos::eliminar(int index)
{
	if ((index < 0) || (index >= numero))
		return;

	delete lista[index];

	numero--;
	for (int i = index; i < numero; i++)
		lista[i] = lista[i + 1];

}

void ListaEnemigos::eliminar(Enemigo *e)
{
	for (int i = 0; i < numero; i++)
		if (lista[i] == e)
		{
			eliminar(i);
			return;
		}

}


Enemigo *ListaEnemigos::operator [](int i)
{
	if (i >= numero)
		i = numero - 1;
	if (i < 0)
		i = 0;

	return lista[i];
}
