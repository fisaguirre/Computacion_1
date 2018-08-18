#ifndef FECHA_H
#define FECHA_H

class Fecha{
private:
    int dia;
    int anio;
    int mes;
    
    
public:
    Fecha();
    Fecha(int,int,int);
    int getdia();
    void setdia(int);
    int getmes();
    void setmes(int);
    int getanio();
    void setanio(int);
    void input();
    void show();
    static void sumar(int,int,int);
    static void comparar(int,int,int);
};

#endif /* FECHA_H */

