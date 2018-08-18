#ifndef PERSONA_H
#define PERSONA_H
#include "Fecha.h"
#include <string>

using namespace std;

class Persona{
private:
    long dni;
    string apellido;
    string nombre;
    Fecha* nacimiento;
   // Fecha* nacimiento;
    //esto es un puntero a Fecha(apunta a un objeto de tipo Fecha)
public:
    Persona();
    Persona(long,string,string,Fecha*);
    long getdni() const;
    void setdni(long dni);
    string getapellido() const;
    void setapellido(string apellido);
    string getnombre() const;
    void setnombre(string nombre);
    
    Fecha* getnacimiento();
    void setnacimiento(Fecha* nacimiento);
   /* Fecha* getnacimiento() const;
    void setnacimiento(Fecha* nacimiento);
    */
    void input();
    void show();
    
    
};



#endif 

