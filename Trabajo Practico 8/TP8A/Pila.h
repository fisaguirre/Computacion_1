#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

class Pila{
private:
    Nodo* lista;
public:
    Pila();
    Nodo* getlista() const;
    void setlista(Nodo* lista);
    void push(double);
    //void pop(int);
    bool pop(double);
    void show();
    
};

#endif /* PILA_H */

