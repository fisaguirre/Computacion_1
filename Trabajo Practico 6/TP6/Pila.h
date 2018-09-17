/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pila.h
 * Author: fernando
 *
 * Created on 12 de septiembre de 2018, 11:27
 */

#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

class Pila {
private:
    
    Nodo* pila;
    
public:
    
    Pila();
    Nodo* getpila() const;
    void setpila(Nodo* pila);
    
    void push(int);
    int pop();
    void show();
    
};

#endif /* PILA_H */

