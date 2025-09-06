#include "Curso.h"
#include <iostream>

Curso::Curso(string id,string nombre,int cantMax,string carrera,string profesor){
    this -> id = id;
    this -> nombre = nombre;
    this -> cantMax = cantMax;
    this -> carrera = carrera;
    this -> profesor = profesor;
}

Curso::~Curso(){}

string Curso::getId(){return id;}
void Curso::setId(string id){this -> id = id;}
string Curso::getNombre(){return nombre;}
void Curso::setNombre(string nombre){this -> nombre = nombre;}
int Curso::getCantMax(){return cantMax;}
void Curso::setCantMax(int cantMax){this -> cantMax = cantMax;}
string Curso::getCarrera(){return carrera;}
void Curso::setCarrera(string carrera){this -> carrera = carrera;}
string Curso::getProfesor(){return profesor;}
void Curso::setProfesor(string profesor){this -> profesor = profesor;}

void Curso::toString(){cout<<"ID de la clase: "<<id<<"\n"
    <<endl;}