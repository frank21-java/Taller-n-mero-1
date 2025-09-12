#pragma once
#include "Alumno.h"
#include "Curso.h"
class Nota {
private:
    Alumno* alumno;
    Curso* curso;
    double dato;
public:
    Nota(Alumno* alumno, Curso* curso,double dato);
    ~Nota();
    
    /**
     * devuelve el alumno al que pertenece una nota
     */
    Alumno* getAlumno();

    /**
     * devuelve el curso al que pertenece una nota
     */
    Curso* getCurso();

    /**
     * devuelve la nota del alumno
     */
    double getDato();

    /**
     * establece la nota
     * nota- nueva nota que se saco
     */
    void setDato(double dato);
    
    /**
     * imprime los datos
     */
    void mostrarNota();
    
};