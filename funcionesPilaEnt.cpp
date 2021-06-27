# include <iostream>
# include <iomanip>
# include "funcionesPilaEnt.hpp"
# include "../funciones/pilaEnt.hpp"

using namespace std;

int numDatos(PilaEnt &p){
	return p.indice_k + 1;
}

void mostrar(PilaEnt &p, const int anchura){
	if (p.indice_k == 0) {
		cout << "+";
		cout << right << setw(anchura+1) << setfill('-');
		cout << "+";
		cout << setfill(' ') << endl;
	} else {
		cout << right << setfill(' ') << "|" << setw(anchura) <<p.dato[p.indice_k] << "|" << endl;
		int valor = cima(p);
		desapilar(p);
		mostrar(p, anchura);
		apilar(p, valor);
	}
}

void mostrarInvertida(PilaEnt &p, const int anchura) {
	if (!estaVacia(p)) {
		int valor = cima(p);
		desapilar(p);
		mostrarInvertida(p, anchura);
		cout << right << setfill(' ') << "|" << setw(anchura) << p.dato[p.indice_k+1] << "|" << endl;
		apilar(p, valor);
	} else {
		cout << "+";
		cout << right << setw(anchura+1) << setfill('-');
		cout << "+";
		cout <<setfill(' ') << endl;
	}
}

void eliminarFondo(PilaEnt &p){
	int valor = cima(p);
	desapilar(p);
	if (!estaVacia(p)) {
		eliminarFondo(p);
		apilar(p, valor);
	}
}

void eliminar(PilaEnt &p, const int i){
	if (p.indice_k == i) {
		desapilar(p);
	} else{
		int valor = cima(p);
		desapilar(p);
		eliminar(p,i);
		apilar(p,valor);
	}
}

void insertarEnFondo(PilaEnt &pila, const int nuevo) {
	if (estaVacia(pila)) {
		apilar(pila, nuevo);
	} else{
		int valor = cima(pila);
		desapilar(pila);
		insertarEnFondo(pila, nuevo);
		apilar(pila, valor);
	}
}
