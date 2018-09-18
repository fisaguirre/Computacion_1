
#include <cstdlib>

#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila() {
    lista=NULL;
}

Nodo* Pila::getlista() const{
    return lista;
}
void Pila::setlista(Nodo* lista){
    this->lista=lista;
}

void Pila::push(double valor){
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->setvalor(valor);
    
    //creo 2 auxiliares
    Nodo* aux1 = lista;
    Nodo* aux2;
    while((aux1!=NULL) && (aux1->getvalor()<=valor)){
        aux2=aux1;
        aux1= aux1->getsiguiente();
    }
    if(lista==aux1){
        lista=nuevo_nodo;
    }
    else{
        aux2->setsiguiente(nuevo_nodo);
    }
    nuevo_nodo->setsiguiente(aux1);
}


bool Pila::pop(double valor) {
	// Verifica si la lista está vacía
	if (lista == NULL)
		return false;
	// Verifica si es el primero
	if ((lista->getvalor()) == valor) {
		Nodo* xx = lista;
		lista = lista->getsiguiente();
		delete xx;
		return true;
	}
	// Busca posicion para del valor a eliminar
	Nodo *previous, *search;
	search = previous = lista;
	while (search != NULL && (search->getvalor()) != valor) {
		previous = search;
		search = search->getsiguiente();
	}

	// Si el while sale por NULL
	if (search == NULL) {
		return false;
	}
	// Si sale del while porque encontró el valor
	Nodo* xx = search;
	previous->setsiguiente(search->getsiguiente());
	delete xx;

	return true;
}

void Pila::show() {
	Nodo* x = lista;

	while (x != NULL) {
		cout << "Direccion: " << x << " - Valor: " << x->getvalor() << " - Siguiente: " << x->getsiguiente() << endl;
		x = x->getsiguiente();
	}}
