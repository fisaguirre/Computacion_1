#ifndef NODO_H
#define NODO_H
#include "Fecha.h"

class Nodo{
private:
    Nodo* siguiente;
    Fecha* valor;
public:
    Nodo();
    Nodo* getsiguiente() const;
    void setsiguiente(Nodo* siguiente);
    Fecha* getvalor() const;
    void setvalor(Fecha* valor);
    
};

#endif /* NODO_H */

