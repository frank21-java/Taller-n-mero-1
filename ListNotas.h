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
    void insertarFinal(Nota* nota);
    void eliminarPorAlumno(string idAlumno);
    void eliminarPorCurso(string idCurso);
    void mostrarTodas();
    bool existeNota(string idAlumno, string idCurso);
    double calcularPromedioAlumno(string idAlumno);
    double calcularPromedioAlumnoCurso(string idAlumno, string idCurso);
    void mostrarNotasAlumno(string idAlumno);
    void mostrarNotasCurso(string idCurso);
};

#endif