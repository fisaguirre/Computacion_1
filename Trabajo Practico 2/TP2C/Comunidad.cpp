#include <cstdlib>
#include "Comunidad.h"
#include "Persona.h"
#include <iostream>
using namespace std;


Comunidad::Comunidad(){
    for(int i=0; i<10;i++){
        personas[i]=new Persona;
        this->personas[i]->setdni(0);
        this->personas[i]->setapellido("");
        this->personas[i]->setnombre("");
        
    }    
}

void Comunidad::setpersonas(Persona* personas){
    for(int i=0;i<10;i++){
        this->personas[i]=&(personas[i]);
    }
}

Persona** Comunidad::getpersonas(){
    return personas;
}

void Comunidad::input(){
    for(int i=0;i<10;i++){
        string nombre;
        string apellido;
        long dni;
        cout<<"Ingrese nombre: "<<endl;
        cin>>nombre;
        this->personas[i]->setnombre(nombre);
        cout<<"Ingrese apellido: "<<endl;
        cin>>apellido;
        this->personas[i]->setapellido(apellido);
        cout<<"Ingrese dni: "<<endl;
        cin>>dni;
        this->personas[i]->setdni(dni);
    }
}

void Comunidad::show(){
    for(int i=0;i<10;i++){
        cout<<"Nombre: "<<this->personas[i]->getnombre()<<endl;
        cout<<"Apellido: "<<this->personas[i]->getapellido()<<endl;
        cout<<"DNI: "<<this->personas[i]->getdni()<<endl;
    }
}

