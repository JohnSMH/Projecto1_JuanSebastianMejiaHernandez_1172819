#pragma once
#include "Nodo.h"

class Pila
{
private:
	Nodo* Head = nullptr;
private:
	int NElementos = 0;
public:
	void Apilar(int valor); 
public:
	int Desapilar(); 
public:
	int ObtenerCima(); 
public:
	int Numerodeelementos();
public:
	Pila();
	~Pila();
};

