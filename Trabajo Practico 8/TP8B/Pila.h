#include "Nodo.h"

#ifndef PILA_H
#define PILA_H

class Pila{
    
private:
    Nodo* lista;
    
public:
    Pila();
    void push(Fecha*);
    bool pop(Fecha*);
    void show();
    Nodo* getlista() const;
    void setlista(Nodo* lista);
    
};

#endif /* PILA_H */

