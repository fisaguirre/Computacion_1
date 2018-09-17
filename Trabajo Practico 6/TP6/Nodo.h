/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: fernando
 *
 * Created on 12 de septiembre de 2018, 11:26
 */

#ifndef NODO_H
#define NODO_H


class Nodo{
private:
    double valor;
    Nodo* siguiente;
    
public:
    Nodo();
    double getvalor() const;
    void setvalor(double valor);
    Nodo* getsiguiente() const;
    void setsiguiente(Nodo* siguiente);
    
    
    
};



#endif /* NODO_H */

