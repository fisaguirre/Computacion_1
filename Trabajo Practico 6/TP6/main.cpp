/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: fernando
 *
 * Created on 12 de septiembre de 2018, 09:53
 */

#include <cstdlib>
#include "Pila.h"
#include <iostream>
using namespace std;


int main(){
    Pila p;
    
    p.pop();
    
    p.push(5);
    p.show();
    
    p.push(10);
    p.show();
    
    p.push(15);
    p.show();
    
    
    cout<<"Se elimino el nodo con el valor: "<<p.pop()<<endl;
    cout<<"Se elimino el nodo con el valor: "<<p.pop()<<endl;
    cout<<"Se elimino el nodo con el valor: "<<p.pop()<<endl;
    cout<<"Se elimino el nodo con el valor: "<<p.pop()<<endl;
}
