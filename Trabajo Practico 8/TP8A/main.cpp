#include <cstdlib>
#include "Pila.h"
#include <iostream>
using namespace std;


int main(){
    Pila p;
    cout<<"agregando valor5"<<endl;
    p.push(5);
    p.show();
    cout<<"agregando valor 2"<<endl;
    p.push(2);
    p.show();
    cout<<"agregando valor 8"<<endl;
    p.push(8);
    p.show();
    cout<<"agregando valor 12"<<endl;
    p.push(12);
    p.show();
    

    cout<<"ELiminando datos: "<<endl;
    cout<<"eliminando valor 5"<<endl;
    p.pop(5);
    cout<<"mostrando luego de borrar valor 5"<<endl;
    p.show();
    cout<<"eliminando valor 2 "<<endl;
    p.pop(2);
    cout<<"mostrando luego de borrar valor 2"<<endl;
    p.show();
    
    cout<<"eliminando valor 8 "<<endl;
    p.pop(8);
    cout<<"mostrando luego de borrar valor 8"<<endl;
    p.show();
    
    cout<<"eliminando valor 12 "<<endl;
    p.pop(12);
    cout<<"mostrando luego de borrar valor 12"<<endl;
    p.show();
    
    
	return 0;

}