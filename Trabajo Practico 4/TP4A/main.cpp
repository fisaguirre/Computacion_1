/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: FERNANDO
 *
 * Created on 12 de agosto de 2018, 14:31
 */

#include <cstdlib>
#include "Fecha.h"
#include <iostream>
using namespace std;

int main(){
    Fecha f1;
    Fecha f2;
   f1.showfecha();
   //si uso "f1" con input y show me toma la fecha por defecto(el del constructor vacio)
   //f1.input();
   //f1.show();
    f2.input();
    f2.show();
    
    Fecha::sumar(f2.getdia(),f2.getmes(),f2.getanio());
    Fecha::comparar(f2.getdia(),f2.getmes(),f2.getanio());
}
