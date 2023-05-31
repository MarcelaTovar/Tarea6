#pragma once
#include <iostream>
#include <string>
#include "Pila.h"
#include "MiClase.h"
using namespace std;

inline void aumento(int& valorIncial, int suma, Pila <int>& pilas, int tamano) {
	pilas.insertar(((valorIncial += suma) - 1));
}
inline void aumento(double& valorInicial, double suma, Pila<double>& p, int tamano) {
	p.insertar(((valorInicial += suma) - 1.1));
}
inline void aumento(string& valorInicial, string valorIncrementado, Pila<string>& p, int tamano) {
	string append = valorInicial + to_string(tamano);
	p.insertar(append);
	cout << append << " ";
}
inline void aumento(MiClase& valorIncial, MiClase valorIncremento, Pila<MiClase>& p, int tamano) {
	string miClaseTemp = "MC" + to_string(tamano);
	MiClase myClass = MiClase(miClaseTemp);
	cout << miClaseTemp << " ";
	p.insertar(myClass);
}

template <typename T>
void Tipos(T valorIncial, T valorIncremento, string nombre, int tamano) {
	Pila<T> pila;
	cout << "--> Insertar elementos en " << nombre << endl;
	for (size_t i = 0; i < tamano; ++i) {
		if (typeid(int) == typeid(T) || typeid(double) == typeid(T)){
			cout << valorIncial << " ";
		}
		aumento(valorIncial, valorIncremento, pila, i);
	}
	
	cout << "\n<-- Extraer elementos de " << nombre << endl;

	while (!pila.estaVacia()) {
		cout << pila.encima() << " ";
		pila.extraer();
	}
	cout << endl;
}




