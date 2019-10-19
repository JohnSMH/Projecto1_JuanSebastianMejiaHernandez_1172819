#include "ListaDE.h"

ListaDE::ListaDE()
{
	NElementos = 0;
}

void ListaDE::Agregar(int valor) {
	NodoL* Nuevo = new NodoL();
	Nuevo->num = valor;

	Nuevo->Siguiente = nullptr;
	Nuevo->Anterior = nullptr;

	if (NElementos==0)
	{
		Head = Nuevo;
	}
	else {
		Head->Anterior = Nuevo;
		Nuevo->Siguiente = Head;
		Head = Nuevo;
	}
	NElementos++;
}

int ListaDE::Quitar() {
	NodoL* aux = new NodoL();
	aux = Head;
	int n = aux->num;
	if (NElementos == 1)
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

int ListaDE::Numerodeelementos() {
	return NElementos;
}


ListaDE::~ListaDE()
{
}

