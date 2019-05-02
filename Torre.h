#pragma once

// Esta clase es la base para las dem�s torres
//Contendr� atributos y m�todos que compartan todas las dem�s torres



#include"Vector2D.h"



class Torre
{
protected:
	//Variables:

	Vector2D posicion;
	float rango;
	int nivel;
	float oro_necesario;

public:
	//Constructor y destructor:
	Torre();		//Por defecto
	Torre(float px, float py);	// Para que al construir tengamos que darle la posicion

	~Torre();

	//Metodos:
	void getPos(float xi, float yi);
	void UpgradeTorre(int oro);
	
};
