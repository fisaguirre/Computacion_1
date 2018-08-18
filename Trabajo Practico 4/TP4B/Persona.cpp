#include <cstdlib>
#include "Persona.h"
#include "Fecha.h"
#include <iostream>
#include <string>
using namespace std;
//SIEMPRE PONER AMBOS CONSTRUCTORES, SINO DA PROBLEMAS
Persona::Persona(){
    nacimiento= new Fecha;
}
Persona::Persona(long dni, string apellido, string nombre, Fecha* nacimiento){
    this->dni=dni;
    this->apellido=apellido;
    this->nombre=nombre;
    this->nacimiento=nacimiento;
}
long Persona::getdni() const{
    return dni;
}
void Persona::setdni(long dni){
    this->dni;
}
string Persona::getapellido() const{
    return apellido;
}
void Persona::setapellido(string apellido){
    this->apellido;
}
string Persona::getnombre() const{
    return nombre;
}
void Persona::setnombre(string nombre){
    this->nombre;
}
Fecha* Persona::getnacimiento() {
    return nacimiento;
}
void Persona::setnacimiento(Fecha* nacimiento){
    this->nacimiento=nacimiento;
}

void Persona::input(){
    cout<<"Ingrese sus datos: "<<endl;
    cout<<"Apellido: "<<endl;
    cin>>apellido;
    cout<<"Nombre: "<<endl;
    cin>>nombre;
    cout<<"Dni: "<<endl;
    cin>>dni;
    int dia;
    int mes;
    int anio;
    nacimiento->input();
}

void Persona::show(){
    cout<<"----------------------"<<endl;
    cout<<"Sus datos son: "<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dni: "<<dni<<endl;
    nacimiento->show();
    
}