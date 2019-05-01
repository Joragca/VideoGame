#pragma once

#include"Camino.h"
#include"Disparo.h"
#include"Enemigo.h"
#include"GenEnemigos.h"
#include"Meta.h"
#include"Mundo.h"
#include"Torre.h"
#include"Vector2D.h"

class Mundo
{
	//Variables:
	
	//Coordenadas vista
	float x_ojo;
	float y_ojo;
	float z_ojo;

	//Declarar aqui todos los objetos:

	Torre Torre0;



	
public:
	//Constructor y destructor:
	Mundo();
	~Mundo();

	//Metodos:
	void Dibuja();
	void Inicializa();


};

