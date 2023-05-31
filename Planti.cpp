#include <iostream> 
#include <locale>
#include "Tipos.h"
#include "MiClase.h"

int main() {
	Tipos<double>(1.1, 1.1, "doblePila", 5);
	Tipos<int>(1, 1, "intPila", 10);
	Tipos<string>("C++", "", "stringPila", 10);
	MiClase mc = MiClase(" ");
	Tipos<MiClase>(mc, mc, "mcPila", 10);
	cout << endl;
}
