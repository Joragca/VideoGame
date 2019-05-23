#pragma once

//Clase que se encarga de definir y gestionar las interacciones entre los distintos objetos

#include "Disparo.h"
#include "Enemigo.h"
class Interaccion
{
public:
	Interaccion();
	~Interaccion();

	//Metodos:

	//Colisiones:
	
	static bool colision(Disparo d, Enemigo e);

};

