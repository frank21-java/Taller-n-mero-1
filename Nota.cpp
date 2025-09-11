#include "Nota.h"
#include <iostream>
using namespace std;

Nota::Nota(Alumno* alumno, Curso* curso, double dato){
    this ->alumno=alumno;
    this ->curso=curso;
    this ->dato=dato;
}
Nota::~Nota(){}

Alumno* Nota::getAlumno() {
    return alumno;
}
Curso* Nota::getCurso(){
    return curso;
}
double Nota::getDato(){
    return dato;
}
void Nota::setDato(double dato){
    this->dato = dato;
}

void Nota::mostrarNota(){
    cout<<"El alumno "<<alumno->getNombre()<<" "<<alumno->getApellido()<<" tiene una nota "<<dato<<" en la asignatura "<<curso->getNombre()<<endl;
}