#pragma once
#include "Alumno.h"
#include "Curso.h"
class Nota{
private:
    Alumno* alumno;
    Curso* curso;
    double dato;
public:
    Nota(Alumno* alumno, Curso* curso,double dato);
    ~Nota();
    void mostrarNota();
};