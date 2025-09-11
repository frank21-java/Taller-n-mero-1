#pragma once
#ifndef LISTNOTAS_H
#define LISTNOTAS_H
#include "Nota.h"
#include <string>
using namespace std;

struct NodoNota {
    Nota* nota;
    NodoNota* siguente;
    
    NodoNota(Nota* notaPtr):nota(notaPtr),siguente(nullptr) {}
};

class ListNotas {
private:
    NodoNota* cabeza;
    NodoNota* cola;

public:
    ListNotas();
    ~ListNotas();

    /**
     * inserta una nota al final de la lista
     * nota- nota que se agrega a la lista
     */
    void insertarFinal(Nota* nota);

    /**
     * elimina una nota cuando se hace algo por alumno
     * idAlumno- id del alumno que se le modifico la nota o fue borrado
     */
    void eliminarPorAlumno(string idAlumno);

    /**
     * elimina una nota afectada por el curso
     * idCurso- el id del curso que fue borrado
     */
    void eliminarPorCurso(string idCurso);

    /**
     * imprime todas las notas
     */
    void mostrarTodas();

    /**
     * revisa si existe una nota para un alumno de ese curso
     * idAlumno- el id del alumno a revisar
     * idCurso- el id de la clase de la nota
     */
    bool existeNota(string idAlumno, string idCurso);

    /**
     * devuelve el promedio de todas las notas de un alumno
     * idALumno- alumno al que se busca su promedio
     */
    double calcularPromedioAlumno(string idAlumno);

    /**
     * devuelve el promedio de un alumno para una clase
     * idAlumno- alumno que se busca promedio
     * idCurso- id del curso que se quiere ver el promdeio de nota
     */
    double calcularPromedioAlumnoCurso(string idAlumno, string idCurso);

    /**
     * muesta todas las notas de un alumno
     * idAlumno- alumno al que se le imprimen las notas
     */
    void mostrarNotasAlumno(string idAlumno);

    /**
     * imprime todas las notas de un curso
     * idCurso- id del curso al que se le imprimen las notas
     */
    void mostrarNotasCurso(string idCurso);
};

#endif