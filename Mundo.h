#pragma once

#include"Camino.h"
#include"Disparo.h"
#include"Enemigo.h"
#include"GenEnemigos.h"
#include"Meta.h"
#include"Mundo.h"
#include"Torre.h"
#include"Vector2D.h"
#include"ListaTorres.h"
//#include "ListaDisparos"
//#include "ListaEnemigos"

class Mundo
{
	//Variables:

	//Coordenadas vista
	float x_ojo;
	float y_ojo;
	float z_ojo;

	bool impacto; // Gestionar los impactos de los disparos con los enemigos etc
	int nivel_mundo;	// Gestionar los diferentes mapas 

	//Declarar aqui todos los objetos:
	ListaTorres torres;
	ListaDisparos disparos;
	//ListaEnemigos enemigos;
	Enemigo enemigo;

public:
	//Constructor y destructor:
	Mundo();
	~Mundo();

	//Metodos:

	void Inicializa();
	void Dibuja();
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void mueve();
	bool getImpacto() { return impacto; };
	int getNumTorres() { return torres.getNumero(); };
	bool cargarMapa();
	void funcionLoopPrueba(); // Cambiar por la funcion loop de verdad cuando este 
};

