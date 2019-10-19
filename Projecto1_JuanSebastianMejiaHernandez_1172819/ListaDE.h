#pragma once
#include "NodoL.h"

class ListaDE
{
public:
	ListaDE();
	~ListaDE();
private:
	int NElementos = 0;
	NodoL* Head = nullptr;
	NodoL* End = nullptr;
public:
	void Agregar(int valor);
	int  Numerodeelementos();
public:
	int Quitar();
};

