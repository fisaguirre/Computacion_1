#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "Fecha.h"
using namespace std;

class Persona{
private:
    long dni;
    string apellido;
    string nombre;
    Fecha nacimiento;
    
public:
    Persona();
    Persona(long,string,string,Fecha);
    long getdni();
    void setdni(long);
    string getapellido();
    void setapellido(string);
    string getnombre();
    void setnombre(string);
    Fecha getnacimiento();
    void setnacimiento(Fecha);
    void input();
    void show();
    
};


#endif /* PERSONA_H */

