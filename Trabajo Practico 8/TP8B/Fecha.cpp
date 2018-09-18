#include <cstdlib>
#include <sstream>
#include "Fecha.h"
#include <string>

using namespace std;


Fecha::Fecha()
{
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


string Fecha::toString()
{
	stringstream ss;
	ss << this->dia << "/" << this->mes << "/" << this->anio;
	return ss.str();
}

void Fecha::setdia(int dia)
{
	this->dia = dia;
}

int Fecha::getdia() const
{
	return this->dia;
}

void Fecha::setmes(int mes)
{
	this->mes = mes;
}

int Fecha::getmes() const
{
	return this->mes;
}

void Fecha::setanio(int anio)
{
	this->anio = anio;
}

int Fecha::getanio() const
{
	return this->anio;
}


bool Fecha::operator >(Fecha p) {
	return this->dia > p.dia;
}

bool Fecha::operator <=(Fecha p) {
	return this->dia <= p.dia;
}

bool Fecha::operator ==(Fecha p) {
	return this->dia == p.dia;
}

bool Fecha::operator !=(Fecha p) {
	return this->dia != p.dia;
}
