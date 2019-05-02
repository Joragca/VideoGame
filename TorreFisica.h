#pragma once

#include"Torre.h"

class TorreFisica : public Torre
{
protected:
	//Por si necesitamos alguna variable que se herede

public:

	//TorreFisica();
	//Al ser una clase heredada hay que darle al constructor los parametros de torre para que pueda construirla antes que la otra
	
	TorreFisica(float x, float y) :Torre(x, y) 
	{
		//Destruir la torre 0 que estaba en la posicion indicada y sustituirla por esta
			



	};	//Meter entre las llaves lo que queremos que haga el constructor
	~TorreFisica();


};

