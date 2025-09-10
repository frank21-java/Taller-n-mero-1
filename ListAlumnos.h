#pragma once
#ifndef LISTAALUMNOS_H
#define LISTAALUMNOS_H
#include "Alumno.h"

struct NodoAlum {
    Alumno* alumno;
    NodoAlum* siguiente;
    NodoAlum(Alumno* alum) : alumno(alum),siguiente(nullptr){}
};
class ListAlumnos{
private:
    NodoAlum* cabeza;
    NodoAlum* cola;

public:
    ListAlumnos();
    ~ListAlumnos();
    
    void insertarFinal(Alumno* alumno);
    void eliminarID(string id);
    void mostrar();
    bool buscarPorID(string id);
    Alumno* obtenerPorId(string id);
};

#endif