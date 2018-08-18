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
};

#endif /* FECHA_H */

