#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona{
private:
    long dni;
    string apellido;
    string nombre;
    
public:
    Persona();
    Persona(long,string,string);
    long getdni();
    void setdni(long);
    string getapellido();
    void setapellido(string);
    string getnombre();
    void setnombre(string);
    void input();
    void show();
    
};


#endif /* PERSONA_H */

