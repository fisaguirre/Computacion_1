#include <cstdlib>
#include <iostream>
#include "Nodo.h"

using namespace std;


Nodo::Nodo(){
    valor=NULL;
    siguiente=NULL;
}

Nodo* Nodo::getsiguiente() const{
    return siguiente;
}
void Nodo::setsiguiente(Nodo* siguiente){
    this->siguiente=siguiente;
}

Fecha* Nodo::getvalor() const{
    return valor;
}
void Nodo::setvalor(Fecha* valor){
    this->valor=valor;
}

