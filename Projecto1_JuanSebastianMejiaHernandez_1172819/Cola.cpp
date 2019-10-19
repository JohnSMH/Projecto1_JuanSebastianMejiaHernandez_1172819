#include "Cola.h"

Cola::Cola()
{
	NElementos = 0;
}

void Cola::Encolar(int valor) {
	Nodo* nodo = new Nodo();
	nodo->num = valor;
	

	if (NElementos == 0) {
		Head = nodo;

	}
	else {
		End->Siguiente = nodo;
	}

	
	NElementos++;
	End = nodo;
}

int Cola::Descolar() {
	

	Nodo* aux = new Nodo();
	aux = Head;
	int n = aux->num;
	if (NElementos==1)
	{
		Head = nullptr;
		End = nullptr;
		NElementos--;
	}
	else {
		Head = Head->Siguiente;
		NElementos--;
	}

	delete aux;
	return n;
	


}

int Cola::Numerodeelementos() {
	return NElementos;
}


Cola::~Cola()
{
}
