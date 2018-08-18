#ifndef FECHA_H
#define FECHA_H

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
        
        void input();
        void show();        
};

#endif 