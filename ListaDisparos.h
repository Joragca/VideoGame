#include "Disparo.h"
#define MAX_DISPAROS 200
class ListaDisparos
{
public:
	ListaDisparos();
	~ListaDisparos();
	bool agregar(Disparo *d);
	void dibuja();
	void destruirContenido();
	void eliminar(int index);
	void eliminar(Disparo *d);

private:
	Disparo *lista[MAX_DISPAROS];
	int numero;
};

