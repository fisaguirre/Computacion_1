#include <cstdlib>
#include "Persona.h"
#include "Fecha.h"
#include <iostream>
#include <string>
using namespace std;

Persona::Persona(){
}
Persona::Persona(long dni, string apellido, string nombre, Fecha nacimiento){
    this->dni=dni;
    this->apellido=apellido;
    this->nombre=nombre;
    this->nacimiento=nacimiento;
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
Fecha Persona::getnacimiento(){
    return nacimiento;
}
void Persona::setnacimiento(Fecha nacimiento){
    this->nacimiento=nacimiento;
}


void Persona::input(){
    cout<<"Ingrese su DNI: "<<endl;
    cin>>dni;
    cout<<"Ingrese su apellido: "<<endl;
    cin>>apellido;
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nombre;
    cout<<"Ingrese su fecha de nacimiento: "<<endl;
  //  nacimiento.input();
}

void Persona::show(){
    cout<<"DNI: "<<this->dni<<endl;
    cout<<"Apellido: "<<this->apellido<<endl;
    cout<<"Nombre : "<<this->nombre<<endl;
    //nacimiento.show();
}
