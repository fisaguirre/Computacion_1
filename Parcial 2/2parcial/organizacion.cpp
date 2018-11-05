#include "organizacion.h"
#include <iostream>
#include "myconnection.h"

using namespace std;
Organizacion::Organizacion()
{
    nombre="";

}

Organizacion::Organizacion(string nombre)
{
    this->setNombre(nombre);
}

void Organizacion::agregar()
{

}

void Organizacion::inicio(){
    cout<<"<html><head>"<<endl;
    cout<<"<link href='http://localhost/bootstrap.css' rel='stylesheet'>"<<endl;
    cout << "</head>" <<endl;
    cout << "<body>   <div class='container'>"<<endl;
    cout<<"<div class='centrar'><h2>Organizaciones Cargadas</h2></div>"<<endl;
    cout << "<table class='table table-hover table-bordered  table-striped' cellpadding='0' cellspacing='0'>" << endl;
    cout << "<thead><tr>" << endl;
    cout << "<th >Nombre</th>"<< endl;
    cout << "<th >Cantidad empleados</th>"<< endl;
    cout << "<th >Ordenado</th>"<< endl;
    cout << "</tr></thead>" << endl;
    cout << "<tbody><tr>" << endl;
    this->listar();
    cout << "</tr>" << endl;
    cout << "</tr></tbody>" << endl;
    cout << "</table>" << endl;
    cout << "<a href='2Parcial'" << endl;
    cout << ">Volver</a>"<<endl;
    cout<<"</form>"<<endl;
    cout<<"</div></body></html>"<<endl;
}
void Organizacion::listar()
{
    MyConnection myconnection;
    myconnection.connect();
    sql::ResultSet* organizaciones = myconnection.query("SELECT * FROM computacion.organizacion ORDER BY nombreOrganizacion ASC;");
    while (organizaciones->next()) {
        cout << "<td>" << organizaciones->getString("id") << "</td>" << endl;
        cout << "<td>" << organizaciones->getString("nombreOrganizacion") << "<td>" << endl;
        cout << "<a class='btn btn-danger' style='width: 100px' href='2Parcial?eliminarorg=" + organizaciones->getString("id") + "'" << endl;
        cout << ">X</a></td>" << endl;
        cout << "<td><form action='' method='get'><input type='text' class='form-control' style='width: 120px' name='modificado'><button class='btn btn-primary' type='submit' name='id2' value='" + organizaciones->getString("id") + "'>enviar</button></form></td></tr>" << endl;
    }
}

void Organizacion::eliminar(string x){
    stringstream stringSQL;
    stringSQL <<"DELETE FROM organizacion WHERE id = "<< x <<";";
    MyConnection::instance()->execute(stringSQL.str());
}

void Organizacion::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Organizacion::getNombre()
{
    return this->nombre;
}
