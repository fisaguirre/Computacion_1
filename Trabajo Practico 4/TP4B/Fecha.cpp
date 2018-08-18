#include <cstdlib>
#include "Fecha.h"
#include <iostream>
using namespace std;
Fecha::Fecha(){
    
}
Fecha::Fecha(int, int, int){
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
}

int Fecha::getdia() const{
    return dia;
}
void Fecha::setdia(int dia){
    this->dia;
}
int Fecha::getmes() const{
    return mes;
}
void Fecha::setmes(int mes){
    this->mes;
}
int Fecha::getanio() const{
    return anio;
}
void Fecha::setanio(int anio){
    this->anio;
}

void Fecha::input(){
    cout<<"Ingrese su fecha de nacimiento: "<<endl;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Anio: ";
    cin>>anio;
}
void Fecha::show(){
    cout<<"Fecha de nacimiento: ";
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
