#include "pch.h"
#include "Mundo.h"


Mundo::Mundo()
{
}


Mundo::~Mundo()
{
	torres.destruirContenidoLista();

}

void Mundo::Dibuja()	// RODRi esto es para ti <3
{

}

void Mundo::Inicializa()
{
	impacto = false;

	//Ver las coordenadas apropiadas
	x_ojo = 0;
	y_ojo = 7.5;
	z_ojo = 30;

	cargarMapa();

	// Codigo de prueba para comprobar la lista de torres:
	Torre * t0 = new Torre(2, 6);

	for (int i = 0; i < 5; i++)
	{
		Torre* aux = new Torre(1 + i, 3 + i);
		torres.agregar(aux);
	}


	//Al acabar el programa se debe limpiar la memoria correctamente para evitar fallos
	torres.destruirContenidoLista();
}

void Mundo::tecla(unsigned char key)	// Metodo para la posterior creación de un menú
{
}
void Mundo::teclaEspecial(unsigned char key)	// Metodo para captar las acciones del teclado y del raton
{

}

void Mundo::mueve()
{

}

bool Mundo::cargarMapa()		//Devuelve false si el nivel se ha cargado correctamente, true si se ha superado el numero maximo
{
	return false;
}