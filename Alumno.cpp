#include "Alumno.h"
#include <iostream>

Alumno::Alumno(string id,string nombre,string apellido,string carrera,int ingreso){
    this -> id = id;
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> carrera = carrera;
    this -> ingreso = ingreso;
}
Alumno::~Alumno(){}

string Alumno::getId(){return id;}
void Alumno::setId(string id){this -> id = id;}
string Alumno::getNombre(){return nombre;}
void Alumno::setNombre(string nombre){this -> nombre = nombre;}
string Alumno::getApellido(){return apellido;}
void Alumno::setApellido(string apellido){this -> apellido = apellido;}
string Alumno::getCarrera(){return carrera;}
void Alumno::setCarrera(string carrera){this -> carrera = carrera;}
int Alumno::getIngreso(){return ingreso;}
void Alumno::setIngreso(int ingreso){this -> ingreso = ingreso;}

void Alumno::toString(){cout<<"Nombre del alumno: "<<nombre<<"\n"
    <<endl;}