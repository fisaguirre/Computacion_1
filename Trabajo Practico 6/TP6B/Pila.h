
#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

class Pila{
private:
    Nodo* pila;

public:
    Pila();
    Nodo* getpila() const;
    void setpila(Nodo* pila);
    
    void push(Fecha*);
    Fecha* pop();
    void show();
};




#endif /* PILA_H */

