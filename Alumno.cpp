#include "Alumno.h"
#include <iostream>
#include <sstream> //para separar el string de clases

Alumno::Alumno(string id,string nombre,string apellido,string carrera,int ingreso){
    this -> id = id;
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> carrera = carrera;
    this -> ingreso = ingreso;
    cantCursos =0;
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

int Alumno::getContadorCurso(){return cantCursos;}

void Alumno::agregarCurso(string idCurso){
    cursos.append(idCurso+",");
}

bool Alumno::borrarCurso(string idCurso){
    size_t buscar=cursos.find(idCurso);
    if(buscar != string::npos){
        cursos.erase(buscar,idCurso.length()+1);
        return true;
    }
    return false;
}

void Alumno::getCursos(){
    stringstream completo(cursos);
    string temp;
    char borrar=',';
    while(getline(completo,temp,borrar)){
        if(temp!=""){
            cout<<temp<<endl;
        }
    }
}

void Alumno::toString(){cout<<"Nombre del alumno: "<<nombre<<"\n"
    <<endl;}