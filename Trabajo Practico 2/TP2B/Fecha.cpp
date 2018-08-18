#include <iostream>
#include <cstdlib>
#include "Fecha.h"


using namespace std;


Fecha::Fecha(int dia,int mes,int anio){
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
}
Fecha::Fecha(){
}

int Fecha::getdia(){
    return dia;
}
void Fecha::setdia(int dia){
    this->dia=dia;
}
int Fecha::getmes(){
    return mes;
}
void Fecha::setmes(int mes){
    this->mes=mes;
}
int Fecha::getanio(){
    return anio;
}
void Fecha::setanio(int anio){
    this->anio=anio;
}



void Fecha::input(){
    cout<<"Ingrese el dia: "<<endl;
    cin>>this->dia;
    cout<<"Ingrese el mes: "<<endl;
    cin>>this->mes;
    cout<<"Ingrese el año: "<<endl;
    cin>>this->anio;
}
void Fecha::show(){
    cout<<"La fecha es: "<<this->dia<<"/"<<this->mes<<"/"<<this->anio<<endl;
}
