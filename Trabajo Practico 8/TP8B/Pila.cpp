#include "Pila.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


Pila::Pila(){
    lista=NULL;
}

Nodo* Pila::getlista() const{
    return lista;
}

void Pila::setlista(Nodo* lista){
    this->lista=lista;
}

void Pila::push(Fecha* valor){
    Nodo* nuevo_nodo= new Nodo();
    nuevo_nodo->setvalor(valor);
    
    if(lista==NULL){
        lista=nuevo_nodo;
        return;
    }
    
    if(*(lista->getvalor())>*valor){
        nuevo_nodo->setsiguiente(lista);
        lista=nuevo_nodo;
        return;
    }
    
    Nodo* anterior;
    Nodo* buscar;
    anterior=buscar=lista;
    
    while(buscar!=NULL && *(buscar->getvalor())<=*valor){
        anterior=buscar;
        buscar=buscar->getsiguiente();
    }
    
    if(buscar==NULL){
        anterior->setsiguiente(nuevo_nodo);
        return;
    }
    
    nuevo_nodo->setsiguiente(anterior->getsiguiente());
    anterior->setsiguiente(nuevo_nodo);
    
    
}


bool Pila::pop(Fecha* valor){
    
    if(lista==NULL)
        return false;
    
    
    if(*(lista->getvalor())==(*valor)){
        Nodo* x=lista;
        lista=lista->getsiguiente();
        delete x;
        return true;
    }
    
    
    Nodo* anterior;
    Nodo* buscar;
    
    anterior=buscar=lista;
    
    while (buscar != NULL && *(buscar->getvalor()) != *valor) {
		anterior = buscar;
		buscar = buscar->getsiguiente();
	}

	// Si el while sale por NULL
	if (buscar == NULL) {
		return false;
	}
	// Si sale del while porque encontró el valor
	Nodo* xx = buscar;
	anterior->setsiguiente(buscar->getsiguiente());
	delete xx;

	return true;
}


void Pila::show() {
	Nodo* x = lista;

	while (x != NULL) {
		cout << "Direccion: " << x << " - Valor: " << x->getvalor()->toString() << " - Siguiente: " << x->getsiguiente() << endl;
		x = x->getsiguiente();
	}}