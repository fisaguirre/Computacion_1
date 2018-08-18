#include <cstdlib>
#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;


Persona::Persona(){
}
Persona::Persona(long dni, string apellido, string nombre){
    this->dni=dni;
    this->apellido=apellido;
    this->nombre=nombre;
}

long Persona::getdni(){
    return dni;
}
void Persona::setdni(long dni){
    this->dni=dni;
}
string Persona::getapellido(){
    return apellido;
}
void Persona::setapellido(string apellido){
    this->apellido=apellido;
}
string Persona::getnombre(){
    return nombre;
}
void Persona::setnombre(string nombre){
    this->nombre=nombre;
}

void Persona::input(){
    cout<<"Ingrese su DNI: "<<endl;
    cin>>dni;
    cout<<"Ingrese su apellido: "<<endl;
    cin>>apellido;
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nombre;
}

void Persona::show(){
    cout<<"DNI: "<<this->dni<<endl;
    cout<<"Apellido: "<<this->apellido<<endl;
    cout<<"Nombre : "<<this->nombre<<endl;
}

