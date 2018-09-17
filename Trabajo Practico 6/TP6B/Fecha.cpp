#include <cstdlib>
#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha(){
    this->dia = 1;
    this->mes = 1;
    this->anio = 1980;
}
Fecha::Fecha(int dia, int mes, int anio)
{
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

int Fecha::getdia() const{
    return dia;
}
void Fecha::setdia(int dia){
    this->dia=dia;
}
int Fecha::getmes() const{
    return mes;
}
void Fecha::setmes(int mes){
    this->mes=mes;
}
int Fecha::getanio() const{
    return anio;
}
void Fecha::setanio(int anio){
    this->anio=anio;
}

