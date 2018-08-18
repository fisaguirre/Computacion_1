#include <iostream>
#include <cstdlib>
#include "Fecha.h"


using namespace std;


Fecha::Fecha(int dia,int mes,int anio){
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
}
Fecha::Fecha(){
    dia=1;
    mes=12;
    anio=1980;
}

int Fecha::getdia(){
    return dia;
}
void Fecha::setdia(int dia){
    this->dia=dia;
}
int Fecha::getmes(){
    return mes;
}
void Fecha::setmes(int mes){
    this->mes=mes;
}
int Fecha::getanio(){
    return anio;
}
void Fecha::setanio(int anio){
    this->anio=anio;
}



void Fecha::input(){
    cout<<"Ingrese el dia: "<<endl;
    cin>>this->dia;
    cout<<"Ingrese el mes: "<<endl;
    cin>>this->mes;
    cout<<"Ingrese el año: "<<endl;
    cin>>this->anio;
}
void Fecha::show(){
    cout<<"La fecha es: "<<"+"<<this->dia<<"+"<<this->mes<<"+"<<this->anio<<endl;
}

void Fecha::sumar(int d,int m,int y){
    int suma=0;
    int suma2=0;
    int contador=0;
    cout<<"Ingrese cuantos dias desea agregar: "<<endl;
    cin>>suma;  
    suma=suma+d;
    int i=0;
    for(i=0;i<100;i++){
    if(m==1){
        if(suma>31){
                suma2=0;
                suma2=suma-31;
                suma=suma2;
                m++;
                cout<<"Enero:"<<suma<<endl;
        }
    }
    if(m==2){
        if(suma>28){
                suma2=0;
                suma2=suma-28;
                suma=suma2;
                m++;
                cout<<"Febrero:"<<suma<<endl;
        }
    }
    if(m==3){
        if(suma>31){
                suma2=0;
                suma2=suma-31;
                suma=suma2;
                m++;
                cout<<"Marzo:"<<suma<<endl;
        }
    }
    if(m==4){
        if(suma>30){
                suma2=0;
                suma2=suma-30;
                suma=suma2;
                m++;
                cout<<"Abril:"<<suma<<endl;
        }
    }
    if(m==5){
        if(suma>31){
                suma2=0;
                suma2=suma-31;
                suma=suma2;
                m++;
                cout<<"Mayo:"<<suma<<endl;
        }
    }
    if(m==6){
        if(suma>30){
                suma2=0;
                suma2=suma-30;
                suma=suma2;
                m++;
                cout<<"Junio:"<<suma<<endl;
        }
    }
    if(m==7){
        if(suma>31){
                suma2=0;
                suma2=suma-31;
                suma=suma2;
                m++;
                cout<<"Julio:"<<suma<<endl;
        }
    }
    if(m==8){
        if(suma>31){
                suma2=0;
                suma2=suma-31;
                suma=suma2;
                m=9;
                cout<<"Agosto:"<<suma<<endl;
        }
    }
    if(m==9){
        if(suma>30){
                suma2=0;
                suma2=suma-30;
                suma=suma2;
                m=10;
                cout<<"Septiembre:"<<suma<<endl;
        }
    }
    if(m==10){
        if(suma>31){
                suma2=0;
                suma2=suma-31;
                suma=suma2;
                m=11;
                cout<<"Octubre:"<<suma<<endl;
        }
    }
    if(m==11){
        if(suma>30){
                suma2=0;
                suma2=suma-30;
                suma=suma2;
                m=12;
                cout<<"Noviembre:"<<suma<<endl;
        }
    }
    if(m==12){
        if(suma>31){
                suma2=0;
                suma2=suma-31;
                suma=suma2;
                m=1;
                y=y+1;
        }
    }
    }
    cout<<"Su nueva fecha es: "<<suma<<"/"<<m<<"/"<<y<<endl;
    
}

void Fecha::comparar(int d,int m,int y){
    int dia;
    int mes;
    int anio;
    cout<<"---------------------------------------"<<endl;
    cout<<"Ingrese una nueva fecha: "<<endl;
    cout<<"Dia: "<<endl;
    cin>>dia;
    cout<<"Mes: "<<endl;
    cin>>mes;
    cout<<"Anio: "<<endl;
    cin>>anio;
    
    if(dia==d && mes==m && anio==y){
        cout<<"Las dos fechas son iguales"<<endl;
        
    }else{
        cout<<"Las dos fechas son distintas"<<endl;
    }
    
    
}