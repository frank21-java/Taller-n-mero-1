#pragma once
#ifndef LISTCLASES_H
#define LISTCLASES_H
#include "Curso.h"

struct NodoClase {
    Curso* curso;
    NodoClase* siguiente;
    NodoClase(Curso* cur) : curso(cur), siguiente(nullptr){}
};
class ListClases {
private:
    NodoClase* cabeza;
    NodoClase* cola;
public:
    ListClases();
    ~ListClases();
    
    void insertarFinal(Curso* curso);
    void eliminarPorId(string id);
    void mostrar();
    bool buscarPorId(string id);
    Curso* obtenerPorId(string id);
};

#endif
