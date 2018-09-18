#ifndef NODO_H
#define NODO_H

class Nodo{
    
private:
    double valor;
    Nodo* siguiente;
    
public:
    Nodo();
    Nodo* getsiguiente() const;
    void setsiguiente(Nodo* siguiente);
    double getvalor() const;
    void setvalor(double valor);
    
};

#endif /* NODO_H */

