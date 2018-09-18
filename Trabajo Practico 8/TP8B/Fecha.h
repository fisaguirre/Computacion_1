#ifndef FECHA_H
#define FECHA_H

#include <string>

using namespace std;

class Fecha{
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int,int,int);
    int getdia() const;
    void setdia(int dia);
    int getmes() const;
    void setmes(int mes);
    int getanio() const;
    void setanio(int anio);
    string toString();
    
    //Son para que no moleste los operadores en Pila.cpp
    bool operator>(Fecha);
    bool operator<=(Fecha);
    bool operator==(Fecha);
    bool operator!=(Fecha);
};

#endif /* FECHA_H */

