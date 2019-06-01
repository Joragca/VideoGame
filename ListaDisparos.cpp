#include "ListaDisparos.h"


ListaDisparos::ListaDisparos()
{

}

ListaDisparos::~ListaDisparos()
{

}

void ListaDisparos::dibuja()
{
	for (int i = 0; i < numero; i++)
		lista[i]->dibuja();
}

void ListaDisparos::mueve(float t)
{
	for (int i = 0; i < numero; i++)
		lista[i]->mueve(t);
}

void ListaDisparos::destruirContenido()
{
	for (int i = 0; i < numero; i++)
		delete lista[i];

	numero = 0;
}

bool ListaDisparos::agregar(Disparo *d)
{
	for (int i = 0; i < numero; i++)//para evitar que se añada una esfera ya existente
		if (lista[i] == d)
			return false;

	if (numero < MAX_DISPAROS)
		lista[numero++] = d;
	else
		return false;
	return true;
}
void ListaDisparos::colision(ListaEnemigos e)
{
	for (int i = 0; i < numero; i++)		//recorremos toda la lista mirando si se producen colisiones
	{
		for (int j = 0; e.numero; j++)
		{
			if (Interaccion::colision(*(lista[i]), *e.lista[j]))	//Si hay una colision:
			{

				
				//float dañoresta = lista[i]->getdmDañoFisico;	//Guardamos en la variable el daño que hace dicha torre
				if (e.restaHp(lista[i]->getdmDañoFisico))			//Actualizamos la vida del enemigo y comprobamos si ha muerto
				{
					//Habria que llamar a una funcion que se encargue de destruir al enemigo si ha muerto
				}
				delete lista[i];
				lista[i] = 0;
				
				//TODO ESTO PARA EL MUNDO !!!!!!
			}
		}
		
	}
}

