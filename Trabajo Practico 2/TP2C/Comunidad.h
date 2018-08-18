#ifndef COMUNIDAD_H
#define COMUNIDAD_H
#include "Persona.h"

class Comunidad{
private:
    Persona* personas[10];
    //personas es un array de punteros que apunta a un objeto de tipo Persona
public:
    Comunidad();
    Persona** getpersonas();
    //aca obtengo el array de punteros de personas que apunta a un objeto de tipo puntero 
    //que apunta a "Persona"
    void setpersonas(Persona*);
    //
    
    void input();
    void show();
};

#endif /* COMUNIDAD_H */

