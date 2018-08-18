#include <cstdlib>
#include "Fecha.h"
#include <iostream>
using namespace std;

int main(){
    
    Fecha f1;
    cout<<f1.getdia()<<"+"<<f1.getmes()<<"+"<<f1.getanio()<<endl;
    
    Fecha f2;
    f2.input();
    f2.show();
    Fecha::sumar(f2.getdia(),f2.getmes(),f2.getanio());
    Fecha::comparar(f2.getdia(),f2.getmes(),f2.getanio());
}