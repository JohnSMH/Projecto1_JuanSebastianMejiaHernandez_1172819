#include "Pila.h"

Pila::Pila()
{
	NElementos = 0;
}


Pila::~Pila()
{
}

int Pila::Numerodeelementos() {
	return NElementos;
}

void Pila::Apilar(int valor) {
	Nodo* NodoNuevo = new Nodo();
	NodoNuevo->num = valor;
	if (Head == nullptr)
	{
		Head = NodoNuevo;
	}
	else
	{
		Nodo* Aux = new Nodo();
		Aux = Head; 
		Head = NodoNuevo; 
		Head->Siguiente = Aux; 
	}
	NElementos++; 
}
int Pila::Desapilar() {
	if (Head == nullptr)
	{
		return -1;
	}
	else
	{
		int valor = Head->num;
		Head = Head->Siguiente;
		NElementos--;
		return valor;
	}
}
int Pila::ObtenerCima() {
	if (Head == nullptr)
	{
		return -1;
	}
	else
	{
		return Head->num;
	}
}
