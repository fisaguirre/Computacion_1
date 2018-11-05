#include "persona.h"
#include <iostream>
#include "myconnection.h"

using namespace std;
Persona::Persona()
{
    dni=0;
    apellido="";
    nombre="";

}

Persona::Persona(long dni, string apellido, string nombre)
{
    this->setDni(dni);
    this->setApellido(apellido);
    this->setNombre(nombre);
}

void Persona::agregar()
{
    string stringSQL;
    stringstream values;
    values << this->getDni() << "','" << this->getNombre() << "','" << this->getApellido() << "','" << '1';
    stringSQL = "INSERT INTO persona (dni,nombre,apellido,idorganizacion) VALUES ('"+values.str()+"');";
    MyConnection::instance()->execute(stringSQL);
    this->inicio();
}

void Persona::inicio(){
    cout<<"<html><head>"<<endl;
    cout<<"<link href='http://localhost/bootstrap.css' rel='stylesheet'>"<<endl;
    cout << "</head>" <<endl;
    cout << "<body>   <div class='container'>"<<endl;
    cout<<"<div class='centrar'><h2>Personas Cargadas</h2></div>"<<endl;
    cout << "<table class='table table-hover table-bordered  table-striped' cellpadding='0' cellspacing='0'>" << endl;
    cout << "<thead><tr>" << endl;
    cout << "<th >DNI</th>"<< endl;
    cout << "<th >Apellido</th>"<< endl;
    cout << "<th >Nombre</th>"<< endl;
    cout << "<th >Organizaci&oacute;n</th>"<< endl;
    cout << "</tr></thead>" << endl;
    cout << "<tbody><tr>" << endl;
    this->listar();
    cout << "</tr>" << endl;
    cout << "</tr></tbody>" << endl;
    cout << "</table>" << endl;

    cout<<"<div class='centrar'><h2>Agregar Persona</h2></div>"<<endl;
    cout<<"<form class='form-signin'  method='post'>"<<endl;
    cout<<"<label for='nombre' class='sr-only'>Nombre</label>"<<endl;
    cout<<"<input type='text' id='nombre' name='nombre' class='form-control' placeholder='Nombre' required autofocus>"<<endl;
    cout<<"<label for='apellido' class='sr-only'>Apellido</label>"<<endl;
    cout<<"<input type='text' id='apellido' name='apellido' class='form-control' placeholder='Apellido' required>"<<endl;
    cout<<"<label for='dni' class='sr-only'>Dni</label>"<<endl;
    cout<<"<input type='text' id='dni' name='dni' class='form-control' placeholder='Dni' required>"<<endl;
    cout<<"<br>"<<endl;
    cout<<"<br>"<<endl;
    cout<<"<button class='btn btn-lg btn-primary btn-block' type='submit'>Enviar</button>"<<endl;
    cout << "<a href='2Parcial'" << endl;
    cout << ">Volver</a>"<<endl;
    cout<<"</form>"<<endl;
    cout<<"</div></body></html>"<<endl;
}

void Persona::listar()
{
    MyConnection myconnection;
    myconnection.connect();
    //sql::ResultSet* personas = myconnection.query("SELECT persona.nombre, persona.apellido, persona.dni FROM persona");
//    sql::ResultSet* personas_organizaciones = myconnection.query("SELECT persona.id as id_persona,persona.nombre as nombre_persona,persona.apellido as apellido_persona,persona.dni as dni_persona,organizacion.nombre as organizacion_nombre FROM computacion.persona INNER JOIN organizacion ON persona.idorganizacion = organizacion.id");
  //  sql::ResultSet* personas_organizaciones = myconnection.query("SELECT persona.id as id_persona,persona.nombre as nombre_persona,persona.apellido as apellido_persona,persona.dni as dni_persona,organizacion.nombre as organizacion_nombre FROM computacion.persona INNER JOIN organizacion");
    sql::ResultSet* personas_organizaciones = myconnection.query("SELECT * from persona");

        while (personas_organizaciones->next()) {
        cout << "<tr>" << endl;
        cout << "<td>" << endl;
    //    cout << personas_organizaciones->getString("dni_persona") << endl;
        cout << personas_organizaciones->getString("dni") << endl;
        cout << "</td>" << endl;
        cout << "<td>" << endl;
      //  cout << personas_organizaciones->getString("apellido_persona") << endl;
        cout << personas_organizaciones->getString("apellido") << endl;
        cout << "</td>" << endl;
        cout << "<td>" << endl;
      //  cout << personas_organizaciones->getString("nombre_persona") << endl;
        cout << personas_organizaciones->getString("nombre") << endl;
        cout << "</td>" << endl;
        cout << "<td>" << endl;
        cout << "<a href='2Parcial?eliminar=" + personas_organizaciones->getString("dni") + "'" << endl;
        cout << ">Eliminar</a>"<<endl;
        cout << "</td>" << endl;
    }
}



void Persona::eliminar(string dni){
    stringstream stringSQL;
    stringSQL <<"DELETE FROM persona WHERE dni = "<< dni <<";";
    MyConnection::instance()->execute(stringSQL.str());
}

void Persona::setDni(long dni)
{
    this->dni = dni;
}

long Persona::getDni()
{
    return this->dni;
}

void Persona::setApellido(string apellido)
{
    this->apellido = apellido;
}

string Persona::getApellido()
{
    return this->apellido;
}

void Persona::setNombre(string  nombre)
{
    this->nombre = nombre;
}

string Persona::getNombre()
{
    return this->nombre;
}
