#pragma once
#include "Nodo.h"

class Cola
{
public:
	Cola();
	~Cola();
private:
	int NElementos = 0;
private:
	Nodo* Head = nullptr;
	Nodo* End = nullptr;

public:
	void Encolar(int valor);
	int  Numerodeelementos();
public:
	int Descolar();
};

