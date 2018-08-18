#include <cstdlib>
#include "Persona.h"
#include "Fecha.h"
#include <iostream>
using namespace std;

int main(){
    Fecha f1(13,9,1995);
    Persona p1(39088047,"Isaguirre","Fernando",f1);
    cout<<"DNI: "<<p1.getdni()<<endl;
    cout<<"Apellido: "<<p1.getapellido()<<endl;
    cout<<"Nombre: "<<p1.getnombre()<<endl;
    cout<<"Fecha de nacimiento: "<<p1.getnacimiento().getdia()<<"/"<<p1.getnacimiento().getmes()<<"/"<<p1.getnacimiento().getanio()<<endl;
    
    Persona p2;
    Fecha f2;
    p2.input();
    f2.input();
    p2.show();
    f2.show();
    return 0;
}