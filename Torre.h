#pragma once

// Esta clase es la base para las demás torres
//Contendrá atributos y métodos que compartan todas las demás torres

#include"Vector2D.h"

class Torre
{
	friend class Interaccion;
protected:
	//Variables:

	Vector2D posicion;
	int rango;
	int nivel;
	float oro_necesario;

public:
	//Constructor y destructor:
	Torre();		//Por defecto
	Torre(float px, float py);	// Para que al construir tengamos que darle la posicion

	~Torre();

	//METODOS:
	//Metodos GET:
	
	float getRango() { return rango; };
	Vector2D getPos() { return posicion; };
	//Metodos SET:
	void setPos(float xi, float yi);


	void UpgradeTorre(int oro);
	// funcion dibuja ---> RODRI;
	float distancia(Vector2D p1, Vector2D p2);	//Metodo que devuelve la distancia de un punto a la torre ( otro punto)
	
	
};

