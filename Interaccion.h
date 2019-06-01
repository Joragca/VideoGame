#pragma once

//Clase que se encarga de definir y gestionar las interacciones entre los distintos objetos

#include "Disparo.h"
#include "Enemigo.h"
#include "Torre.h"
class Interaccion
{
public:
	Interaccion();
	~Interaccion();

	//Metodos:
	static bool enRango(Torre t, Enemigo e);	//Devuelve true si un enemigo esta dentro del rango de una torre


	//Colisiones:
	
	static bool colision(Disparo d, Enemigo e);



};

