#pragma once
#include "Alumno.h"
#include "Curso.h"
class Nota{
private:
    Alumno* alumno;
    Curso* curso;
    double dato;
public:
    Nota(Alumno* alumno, Curso* curso);
    ~Nota();
    double getNota();
    void setNota(double nota);
};
