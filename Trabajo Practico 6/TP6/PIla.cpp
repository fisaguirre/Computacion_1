/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PIla.cpp
 * Author: fernando
 *
 * Created on 12 de septiembre de 2018, 11:27
 */

#include <cstdlib>

#include "Pila.h"
#include <iostream>
using namespace std;

Pila::Pila() {
    
    pila=NULL;
    
}

Nodo* Pila::getpila() const{
    return pila;
}
void Pila::setpila(Nodo* pila){
    this->pila=pila;
}

void Pila::push(int valor){
    
    //creo un objeto "newNodo" de tipo Nodo, donde guardare un valor y un puntero siguiente a Nodo
    Nodo* newNodo = new Nodo();
    //Le asigno un valor al nodo "newNodo"
    newNodo->setvalor(valor);
    //Le asigno el puntero siguiente al nuevo nodo que apuntara al nodo anterior
    newNodo->setsiguiente(pila);
    //Le asigno a Pila el objeto creado "newNodo"(nuevo nodo). Y Pila apuntara al ultimo nodo creado( a la cima de la Pila)
    pila=newNodo;
    
    cout<<"Se introdujo el valor: "<<newNodo->getvalor()<<" en la Pila"<<endl;
    
    
}

int Pila::pop(){
    
    if (pila==NULL)
        return -255;
    
    
    //Creo un nuevo ojbeto de tipo Nodo que apuntara a Pila y esto hace que eliminar_nodo apunte a la cima de la Pila
    Nodo* eliminar_nodo = pila;
    //Obtengo el valor del nodo y lo guardo en el objeto eliminar_nodo y se lo asigno a la variable valor
    int valor = eliminar_nodo->getvalor();
    //Hago que pila apunte al nodo siguiente y asi solo eliminar_nodo apunte al nodo que esta en la cima de la Pila
    pila = pila->getsiguiente();
    //elimino el nodo que esta en la cima de la Pila
    delete eliminar_nodo;
    return valor;
}

void Pila::show(){
    
    Nodo* x=pila;
    
    while(x!=NULL){
        cout<<"Direccion del nodo de Pila : "<<x<<" - Valor del nodo de Pila: "<<x->getvalor()<<" - Direccion del siguiente nodo: "<<x->getsiguiente()<<endl;
        x=x->getsiguiente();
    }
    
}