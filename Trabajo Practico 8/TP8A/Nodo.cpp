#include <cstdlib>

#include "Nodo.h"

using namespace std;

Nodo::Nodo() {
    valor=0;
    siguiente=NULL;
}

Nodo* Nodo::getsiguiente() const{
    return siguiente;
}

void Nodo::setsiguiente(Nodo* siguiente){
    this->siguiente=siguiente;
}

double Nodo::getvalor() const{
    return valor;
}
void Nodo::setvalor(double valor){
    this->valor=valor;
}