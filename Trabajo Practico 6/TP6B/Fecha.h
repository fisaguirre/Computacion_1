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
    Fecha(int dia,int mes,int anio);
    int getdia() const;
    void setdia(int dia);
    int getmes() const;
    void setmes(int mes);
    int getanio() const;
    void setanio(int anio);
    
};

#endif /* FECHA_H */

