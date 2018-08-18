/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.h
 * Author: FERNANDO
 *
 * Created on 12 de agosto de 2018, 14:32
 */

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
        void showfecha();
        static void comparar(int,int,int);
        static void sumar(int,int,int);
        
};




#endif /* FECHA_H */

