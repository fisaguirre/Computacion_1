/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: fernando
 *
 * Created on 12 de septiembre de 2018, 12:49
 */

#include <cstdlib>

#include "Nodo.h"

using namespace std;

Nodo::Nodo(){
    valor=0;
    siguiente=NULL;
}

Fecha* Nodo::getvalor() const{
    return valor;
}
void Nodo::setvalor(Fecha* valor){
    this->valor=valor;
}

Nodo* Nodo::getsiguiente() const{
    return siguiente;
}

void Nodo::setsiguiente(Nodo* siguiente){
    this->siguiente=siguiente;
}
