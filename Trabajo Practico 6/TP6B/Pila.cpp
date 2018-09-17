/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pila.cpp
 * Author: fernando
 *
 * Created on 12 de septiembre de 2018, 12:49
 */

#include <cstdlib>
#include <iostream>
#include "Pila.h"
#include "Nodo.h"

using namespace std;


Pila::Pila(){
    pila=NULL;
}

Nodo* Pila::getpila() const{
    return pila;
}

void Pila::setpila(Nodo* pila){
    this->pila=pila;
}


void Pila::push(Fecha* valor){
    Nodo* newnodo= new Nodo();
    newnodo->setvalor(valor);
    newnodo->setsiguiente(pila);
    pila=newnodo;
    
}


Fecha* Pila::pop(){
    
    Nodo* eliminar_nodo = pila;
    Fecha* valor= eliminar_nodo->getvalor();
    pila=pila->getsiguiente();
    delete eliminar_nodo;
    
    return valor;
}


void Pila::show(){
    Nodo* x = pila;

	while (x != NULL) {
		cout << "Direccion: " << x << " - Valor: " << x->getvalor()->getdia() << "/" << x->getvalor()->getmes() << "/" << x->getvalor()->getanio() << " - Siguiente: " << x->getsiguiente() << endl;
		x = x->getsiguiente();
	}
    
    
}