/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: fernando
 *
 * Created on 12 de septiembre de 2018, 12:49
 */

#ifndef NODO_H
#define NODO_H

#include "Fecha.h"


class Nodo{
private:
    Fecha* valor;
    Nodo* siguiente;
    
public:
    
    Nodo();
    Fecha* getvalor() const;
    void setvalor(Fecha* valor);
    
    Nodo* getsiguiente() const;
    void setsiguiente(Nodo* siguiente);
    
    
    
};


#endif /* NODO_H */

